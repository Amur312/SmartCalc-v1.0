#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"
// Эта функция извлекает введенные пользователем данные о кредите. Если все
// данные корректны (больше нуля), функция возвращает true. В противном случае
// она возвращает false.
bool MainWindow::getInputData(double &credit_sum, int &credit_term,
                              double &procent) {
  credit_sum = ui->credit_sum->text().toDouble();
  credit_term = ui->credit_term->text().toInt();
  procent = ui->credir_procent->text().toDouble();

  if (credit_sum <= 0 || credit_term <= 0 || procent <= 0) {
    return false;
  }

  return true;
}
// Эта функция вызывается при нажатии кнопки расчета кредита. Она очищает все
// выводимые результаты, извлекает введенные данные и, если они валидны,
// производит расчеты. В зависимости от выбранного пользователем способа платежа
// (дифференцированный или аннуитетный), вызывается соответствующая функция
// расчета.
void MainWindow::on_credit_calculate_clicked() {
  clear_credit_line();

  double credit_sum;
  int credit_term;
  double procent;

  if (!getInputData(credit_sum, credit_term, procent)) {
    ui->credit_error->setText(INVALID_DATA_LINE);
    return;
  }

  int term_type_index = ui->credit_term_choice->currentIndex();
  if (!term_type_index) {
    credit_term *= 12;
  }

  procent /= 100;

  bool is_differential_payment = ui->difference->isChecked();
  if (is_differential_payment) {
    difference_calc(credit_sum, credit_term, procent);
  } else {
    annuitet_calc(credit_sum, credit_term, procent);
  }
}

void MainWindow::clear_credit_line() {
  ui->credit_error->clear();
  ui->credit_payment->clear();
  ui->credit_overpayment->clear();
  ui->credit_total_payment->clear();
}
// Эта функция производит расчет аннуитетного платежа. Затем она вызывает
// функцию set_annuitet_result, чтобы вывести результаты на экран.
void MainWindow::annuitet_calc(double credit_sum, const int credit_term,
                               double procent) {
  procent /= 12;
  double payment = credit_sum * procent / (1 - pow(1 + procent, -credit_term));
  double payment_total = payment * credit_term;
  double overpayment = payment_total - credit_sum;
  set_annuitet_result(payment, overpayment, payment_total);
}
// Эта функция выводит результаты аннуитетного расчета на экран.
void MainWindow::set_annuitet_result(const double payment,
                                     const double overpayment,
                                     const double payment_total) {
  QString payment_str = QString::number(payment, 'f', 2);
  QString overpayment_str = QString::number(overpayment, 'f', 2);
  QString payment_total_str = QString::number(payment_total, 'f', 2);

  ui->credit_payment->setText(payment_str);
  ui->credit_overpayment->setText(overpayment_str);
  ui->credit_total_payment->setText(payment_total_str);
}
// Эта функция вычисляет процентный платеж на основе текущей суммы кредита,
// процентной ставки и количества дней в месяце.
double MainWindow::calculatePercentPayment(double credit_sum, double procent,
                                           const QDate &date) {
  return credit_sum * procent * date.daysInMonth() / date.daysInYear();
}
// Эта функция производит расчет дифференцированного платежа. Затем она вызывает
// функцию set_annuitet_result или set_difference_result, чтобы вывести
// результаты на экран.
void MainWindow::difference_calc(double credit_sum, const int credit_term,
                                 const double procent) {
  QDate date_start_term = QDate::currentDate();
  double start_payment = 0.0;
  double end_payment = 0.0;

  double principal_payment = (credit_term != 0) ? credit_sum / credit_term : 0;

  double procent_payment = 0.0;
  double payment = 0.0;
  double total_payment = 0.0;
  double overpayment = -credit_sum;

  for (int i = 0; i < credit_term; ++i, credit_sum -= principal_payment,
           date_start_term = date_start_term.addMonths(1)) {
    procent_payment =
        calculatePercentPayment(credit_sum, procent, date_start_term);
    payment = principal_payment + procent_payment;

    if (i == 0) {
      start_payment = payment;
    } else if (i == credit_term - 1) {
      end_payment = payment;
    }

    total_payment += payment;
  }

  overpayment += total_payment;

  if (credit_term == 1) {
    set_annuitet_result(start_payment, overpayment, total_payment);
  } else {
    set_difference_result(start_payment, end_payment, overpayment,
                          total_payment);
  }
}
// Эта функция выводит результаты расчета дифференцированного платежа на экран.
void MainWindow::set_difference_result(const double start_payment,
                                       const double end_payment,
                                       const double overpayment,
                                       const double payment_total) {
  QString start_payment_str = QString::number(start_payment, 'f', 2);
  QString end_payment_str = QString::number(end_payment, 'f', 2);
  QString overpayment_str = QString::number(overpayment, 'f', 2);
  QString payment_total_str = QString::number(payment_total, 'f', 2);

  QString credit_payment_str = start_payment_str + "..." + end_payment_str;

  ui->credit_payment->setText(credit_payment_str);
  ui->credit_overpayment->setText(overpayment_str);
  ui->credit_total_payment->setText(payment_total_str);
}
