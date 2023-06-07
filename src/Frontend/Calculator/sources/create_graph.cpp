#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"
// Эта функция принимает вводимую пользователем строку, которая представляет
// функцию, и преобразует её в форму обратной польской записи (Reverse Polish
// Notation, RPN). RPN - это способ записи арифметических и алгебраических
// выражений, в котором операторы следуют за своими операндами. В случае успеха
// функция возвращает OK.
int MainWindow::create_rpn_array(char *input_array, token **rpn_array,
                                 int *amount_tokens) {
  int output = input_array_validation(input_array);
  if (output == OK) {
    *rpn_array = reverse_polish_notation(input_array, amount_tokens);
  }
  return output;
}
// Эта функция строит график функции, представленной в виде RPN. Она генерирует
// набор значений x и вычисляет соответствующие значения y, после чего вызывает
// функцию plot_graph(x, y). В случае успеха возвращается OK.
int MainWindow::plot_values_and_graph(token *rpn_array, int amount_tokens,
                                      double x_start, double x_end) {
  int output = OK;
  if (rpn_array != nullptr) {
    double step = (x_end - x_start) / (100001 - 1);
    QVector<double> x(100001), y(100001);
    double result = 0.0;
    int i = 0;
    for (double x_value = x_start; x_value <= x_end && output == OK;
         x_value += step, ++i) {
      token *tmp = copy_array(rpn_array, amount_tokens);
      output = calculation(tmp, amount_tokens, x_value, &result);
      if (output == OK) {
        x[i] = x_value;
        y[i] = result;
      }
      free(tmp);
      tmp = nullptr;
    }
    if (output == OK) {
      plot_graph(x, y);
    }
    free(rpn_array);
    rpn_array = nullptr;
  } else {
    output = SYNTAX_ERROR;
  }
  return output;
}
// Эта функция вызывается при нажатии кнопки "Создать график". Она сначала
// очищает график и строку вывода, затем извлекает введенную пользователем
// функцию и создает массив RPN. После этого она строит график функции.
void MainWindow::on_button_graph_create_clicked() {
  check_axis_value();
  ui->graph_show->clearGraphs();
  ui->graph_show->replot();
  ui->output_line->clear();
  char *input_array = get_input_array();
  int amount_tokens = 0;
  token *rpn_array = nullptr;
  int output = create_rpn_array(input_array, &rpn_array, &amount_tokens);
  double x_start = ui->spin_coord_x_start->value();
  double x_end = ui->spin_coord_x_end->value();
  if (output == OK) {
    output = plot_values_and_graph(rpn_array, amount_tokens, x_start, x_end);
  }
  if (output != OK) {
    ui->output_line->setText(SYNTAX_ERROR_LINE);
  }
  free_pointer(input_array);
}
// Эта функция создает копию массива токенов.
token *MainWindow::copy_array(token *input_array, int amount_tokens) {
  token *output_array = (token *)calloc(amount_tokens, sizeof(token));
  for (int i = 0; i < amount_tokens; ++i) {
    output_array[i] = input_array[i];
  }
  return output_array;
}
// Эта функция вызывается при нажатии кнопки "Очистить график". Она просто
// очищает график.
void MainWindow::on_button_graph_clear_clicked() {
  ui->graph_show->clearGraphs();
  ui->graph_show->replot();
}
// Эта функция отображает график на основе данных x и y.
void MainWindow::plot_graph(const QVector<double> x, const QVector<double> y) {
  ui->graph_show->addGraph();
  set_axis_value();
  ui->graph_show->graph(0)->setData(x, y);
  graph_settings();
  ui->graph_show->replot();
}
// Эта функция устанавливает некоторые настройки графика, такие как цвет линии и
// стиль точек.
void MainWindow::graph_settings() {
  ui->graph_show->graph(0)->setPen(QColor(255, 0, 0, 255));
  ui->graph_show->graph(0)->setLineStyle(QCPGraph::lsNone);
  ui->graph_show->graph(0)->setScatterStyle(
      QCPScatterStyle(QCPScatterStyle::ssCircle, 1));
  ui->graph_show->setInteraction(QCP::iRangeZoom, true);
  ui->graph_show->setInteraction(QCP::iRangeDrag, true);
}
