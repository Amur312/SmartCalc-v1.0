#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDate>
#include <QDateEdit>
#include <QMainWindow>
#define SIZE_BUFFER 255

extern "C" {
#include "../../Backend/headers/calc.h"
#include "../../Backend/headers/help.h"
#include "../../Backend/headers/rpn.h"
#include "../../Backend/headers/stack.h"
#include "../../Backend/headers/validation.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private:
  Ui::MainWindow *ui;

private slots:
  void start_settings();
  void set_validators();
  void set_x_value_validator();
  void set_credit_calc_validator();
  void set_deposit_calc_validator();
  void connect_signals();
  void simple_button();
  void function_button();
  void on_button_pi_clicked();
  void on_button_del_clicked();
  void on_button_AC_clicked();
  char *get_input_array();
  void on_button_equal_clicked();
  void free_pointer(char *pointer);
  double get_x_value();
  void on_input_line_textChanged();
  void set_result(const double result);
  int check_result(const double result);
  void set_default_spin_x_coord();
  void on_button_default_coord_x_clicked();
  void on_button_graph_create_clicked();
  void set_axis_value();
  void check_axis_value();
  token *copy_array(token *input_array, int amount_tokens);
  void plot_graph(const QVector<double> x, const QVector<double> y);
  void graph_settings();
  void on_button_graph_clear_clicked();
  void on_credit_calculate_clicked();
  void clear_credit_line();
  void annuitet_calc(double credit_sum, const int credit_term, double procent);
  void set_annuitet_result(const double payment, const double overpayment,
                           const double payment_total);
  void difference_calc(double credit_sum, const int credit_term,
                       const double procent);
  void set_difference_result(const double start_payment,
                             const double end_payment, const double overpayment,
                             const double total_payment);
  void on_deposit_calculation_clicked();
  void deposit_calculation();
  void clear_deposit_line();
  void on_deposit_start_term_editingFinished();
  void on_deposit_date_replanishment_editingFinished();
  void on_deposit_date_withdraw_editingFinished();
  QDate get_end_date_term_deposit();
  QDate get_next_date_payment(QDate date_payment);
  void get_next_date_replanishment_or_withdraw(QDate *date, const int type);
  void add_replanishment(double *deposit_sum, QDate *date_replanishment);
  void sub_withdraw(double *deposit_sum, QDate *date_withdraw);
  void procent_calculation(const double deposit_sum, const QDate date,
                           double *sum_procent_of_period,
                           double *total_sum_procent);
  void add_sum_tax(double *sum_tax, double *sum_procent_of_year);
  void add_sum_procent_of_year(double *sum_procent_of_year,
                               double *sum_sum_procent_of_period);
  void set_deposit_result(const double total_sum_procent, const double sum_tax,
                          const double deposit_sum);
  void
  check_date_replanishment_or_withdraw(const QDate date_start_term,
                                       const double sum, const int period,
                                       QDate *date_replanishment_or_withdraw);
  int create_rpn_array(char *input_array, token **rpn_array,
                       int *amount_tokens);
  int plot_values_and_graph(token *rpn_array, int amount_tokens, double x_start,
                            double x_end);
  bool isLastCharValid(const QString &text);
  void checkAndUpdateDate(QDateEdit *dateEdit);
  double calculatePercentPayment(double credit_sum, double procent,
                                 const QDate &date);
  bool getInputData(double &credit_sum, int &credit_term, double &procent);

  void process_each_day(QDate &date_start_term, const QDate &date_end_term,
                        double &deposit_sum, double &sum_procent_of_period,
                        double &sum_procent_of_year, double &total_sum_procent,
                        QDate &date_payment, QDate &new_year,
                        const double &sum_replanishment,
                        const double &sum_withdraw, const bool &capitalization,
                        QDate &date_replanishment, QDate &date_withdraw,
                        double &sum_tax);
};
#endif // MAINWINDOW_H
