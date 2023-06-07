/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "../Calculator/headers/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout_3;
    QPushButton *button_6;
    QLineEdit *output_line;
    QPushButton *button_left_bracket;
    QLabel *label_5;
    QPushButton *button_pi;
    QPushButton *button_cos;
    QPushButton *button_acos;
    QPushButton *button_3;
    QPushButton *button_sum;
    QSpinBox *spin_coord_x_end;
    QPushButton *button_5;
    QPushButton *button_AC;
    QPushButton *button_7;
    QPushButton *button_graph_clear;
    QTextEdit *input_line;
    QLabel *label_4;
    QPushButton *button_graph_create;
    QPushButton *button_tan;
    QPushButton *button_4;
    QPushButton *button_log;
    QPushButton *button_atan;
    QPushButton *button_e;
    QPushButton *button_ln;
    QPushButton *button_1;
    QPushButton *button_asin;
    QPushButton *button_mul;
    QPushButton *button_x;
    QPushButton *button_2;
    QPushButton *button_dot;
    QLabel *label_11;
    QPushButton *button_sin;
    QLabel *label_2;
    QCustomPlot *graph_show;
    QPushButton *button_mod;
    QPushButton *button_right_bracket;
    QLineEdit *x_value;
    QPushButton *button_default_coord_x;
    QPushButton *button_equal;
    QPushButton *button_0;
    QPushButton *button_div;
    QPushButton *button_9;
    QPushButton *button_sqrt;
    QLabel *label;
    QPushButton *button_8;
    QPushButton *button_pow;
    QPushButton *button_del;
    QSpinBox *spin_coord_x_start;
    QPushButton *button_sub;
    QLabel *label_3;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QLineEdit *credit_overpayment;
    QLabel *label_15;
    QLineEdit *credir_procent;
    QLineEdit *credit_total_payment;
    QPushButton *credit_calculate;
    QLabel *label_22;
    QLabel *label_17;
    QLabel *credit_error;
    QLabel *label_19;
    QLabel *label_43;
    QLineEdit *credit_payment;
    QLabel *label_12;
    QLabel *label_20;
    QComboBox *credit_term_choice;
    QLabel *label_18;
    QLabel *label_23;
    QLabel *label_13;
    QLabel *label_24;
    QLabel *label_8;
    QRadioButton *annuitet;
    QLabel *label_14;
    QLabel *label_21;
    QLabel *label_10;
    QLineEdit *credit_sum;
    QLineEdit *credit_term;
    QLabel *label_16;
    QRadioButton *difference;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_63;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_7;
    QComboBox *deposit_period_withdraw;
    QLabel *label_27;
    QComboBox *deposit_period_payment;
    QLineEdit *deposit_tax_result;
    QLabel *label_40;
    QLabel *label_31;
    QLabel *label_34;
    QLineEdit *deposit_procent_CB;
    QDateEdit *deposit_start_term;
    QLineEdit *deposit_sum;
    QComboBox *deposit_period_replanishment;
    QLabel *label_41;
    QLabel *label_49;
    QDateEdit *deposit_date_withdraw;
    QLabel *label_50;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_36;
    QLabel *label_47;
    QLabel *deposit_error;
    QPushButton *deposit_calculation;
    QDateEdit *deposit_date_replanishment;
    QLabel *label_35;
    QLabel *label_32;
    QLabel *label_42;
    QLabel *label_33;
    QLineEdit *deposit_sum_result;
    QLabel *label_39;
    QLineEdit *deposit_term;
    QLabel *label_28;
    QLabel *label_29;
    QLineEdit *deposit_sum_replanishment;
    QLabel *label_30;
    QLineEdit *deposit_sum_withdraw;
    QComboBox *deposit_term_type;
    QLabel *label_48;
    QLabel *label_46;
    QLabel *label_37;
    QLabel *label_45;
    QLineEdit *deposit_procent;
    QLabel *label_38;
    QLabel *label_44;
    QLineEdit *deposit_procent_result;
    QCheckBox *deposit_capitalization;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1243, 444);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1243, 444));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("accessories-calculator");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"	background-color: rgb(237, 239, 243);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
"	background-color: rgb(237, 239, 243);\n"
"\n"
"	border:  gray;\n"
"}\n"
"QTabBar::tab {\n"
"\n"
"	background-color:  rgb(237, 239, 243);\n"
"	color: rgb(116, 118, 123);\n"
"	min-width: 18ex;\n"
"	min-height: 3ex;\n"
"	margin-left: 1px;\n"
"	left: -1px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"background-color:  rgb(237, 239, 243);\n"
"color: black;\n"
"}\n"
"QTabBar::tab:hover {\n"
"	background-color:  rgb(229, 228, 226);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        button_6 = new QPushButton(tab);
        button_6->setObjectName("button_6");
        button_6->setMinimumSize(QSize(20, 30));
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        button_6->setFont(font);
        button_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_6, 6, 4, 1, 1);

        output_line = new QLineEdit(tab);
        output_line->setObjectName("output_line");
        output_line->setMinimumSize(QSize(681, 40));
        output_line->setMaximumSize(QSize(1200, 100));
        output_line->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: black;\n"
"background-color: white;"));
        output_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        output_line->setReadOnly(true);

        gridLayout_3->addWidget(output_line, 2, 0, 1, 6);

        button_left_bracket = new QPushButton(tab);
        button_left_bracket->setObjectName("button_left_bracket");
        button_left_bracket->setMinimumSize(QSize(20, 30));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        button_left_bracket->setFont(font1);
        button_left_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_left_bracket, 3, 2, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: #74767b;\n"
"font: 500 10pt \"Ubuntu\";"));
        label_5->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_5, 7, 9, 1, 1);

        button_pi = new QPushButton(tab);
        button_pi->setObjectName("button_pi");
        button_pi->setMinimumSize(QSize(20, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Sans Mono")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(true);
        button_pi->setFont(font2);
        button_pi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_pi, 4, 0, 1, 1);

        button_cos = new QPushButton(tab);
        button_cos->setObjectName("button_cos");
        button_cos->setMinimumSize(QSize(20, 30));
        button_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_cos, 6, 1, 1, 1);

        button_acos = new QPushButton(tab);
        button_acos->setObjectName("button_acos");
        button_acos->setMinimumSize(QSize(20, 30));
        button_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_acos, 6, 0, 1, 1);

        button_3 = new QPushButton(tab);
        button_3->setObjectName("button_3");
        button_3->setMinimumSize(QSize(20, 30));
        button_3->setFont(font);
        button_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_3, 7, 4, 1, 1);

        button_sum = new QPushButton(tab);
        button_sum->setObjectName("button_sum");
        button_sum->setMinimumSize(QSize(20, 30));
        button_sum->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_sum, 7, 5, 1, 1);

        spin_coord_x_end = new QSpinBox(tab);
        spin_coord_x_end->setObjectName("spin_coord_x_end");
        spin_coord_x_end->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        spin_coord_x_end->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_coord_x_end->setMinimum(-1000000);
        spin_coord_x_end->setMaximum(1000000);
        spin_coord_x_end->setSingleStep(10);
        spin_coord_x_end->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        gridLayout_3->addWidget(spin_coord_x_end, 8, 9, 1, 1);

        button_5 = new QPushButton(tab);
        button_5->setObjectName("button_5");
        button_5->setMinimumSize(QSize(20, 30));
        button_5->setFont(font);
        button_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_5, 6, 3, 1, 1);

        button_AC = new QPushButton(tab);
        button_AC->setObjectName("button_AC");
        button_AC->setMinimumSize(QSize(20, 30));
        button_AC->setFont(font1);
        button_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_AC, 3, 4, 1, 1);

        button_7 = new QPushButton(tab);
        button_7->setObjectName("button_7");
        button_7->setMinimumSize(QSize(20, 30));
        button_7->setFont(font);
        button_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_7, 5, 2, 1, 1);

        button_graph_clear = new QPushButton(tab);
        button_graph_clear->setObjectName("button_graph_clear");
        button_graph_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #e1e6ed;\n"
"  color: #74767b; \n"
"}"));

        gridLayout_3->addWidget(button_graph_clear, 7, 11, 1, 1);

        input_line = new QTextEdit(tab);
        input_line->setObjectName("input_line");
        input_line->setMaximumSize(QSize(1200, 100));
        input_line->setLayoutDirection(Qt::LeftToRight);
        input_line->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));
        input_line->setLineWidth(2);
        input_line->setTabStopDistance(80.000000000000000);

        gridLayout_3->addWidget(input_line, 0, 0, 1, 6);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: #74767b;\n"
"font: 500 10pt \"Ubuntu\";"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_3->addWidget(label_4, 7, 8, 1, 1);

        button_graph_create = new QPushButton(tab);
        button_graph_create->setObjectName("button_graph_create");
        button_graph_create->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF7514;\n"
"  color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_3->addWidget(button_graph_create, 8, 11, 1, 1);

        button_tan = new QPushButton(tab);
        button_tan->setObjectName("button_tan");
        button_tan->setMinimumSize(QSize(20, 30));
        button_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_tan, 7, 1, 1, 1);

        button_4 = new QPushButton(tab);
        button_4->setObjectName("button_4");
        button_4->setMinimumSize(QSize(20, 30));
        button_4->setFont(font);
        button_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_4, 6, 2, 1, 1);

        button_log = new QPushButton(tab);
        button_log->setObjectName("button_log");
        button_log->setMinimumSize(QSize(20, 30));
        button_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_log, 8, 0, 1, 1);

        button_atan = new QPushButton(tab);
        button_atan->setObjectName("button_atan");
        button_atan->setMinimumSize(QSize(20, 30));
        button_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_atan, 7, 0, 1, 1);

        button_e = new QPushButton(tab);
        button_e->setObjectName("button_e");
        button_e->setMinimumSize(QSize(20, 30));
        button_e->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_e, 4, 1, 1, 1);

        button_ln = new QPushButton(tab);
        button_ln->setObjectName("button_ln");
        button_ln->setMinimumSize(QSize(20, 30));
        button_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_ln, 8, 1, 1, 1);

        button_1 = new QPushButton(tab);
        button_1->setObjectName("button_1");
        button_1->setMinimumSize(QSize(20, 30));
        button_1->setFont(font);
        button_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_1, 7, 2, 1, 1);

        button_asin = new QPushButton(tab);
        button_asin->setObjectName("button_asin");
        button_asin->setMinimumSize(QSize(20, 30));
        button_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_asin, 5, 0, 1, 1);

        button_mul = new QPushButton(tab);
        button_mul->setObjectName("button_mul");
        button_mul->setMinimumSize(QSize(20, 30));
        button_mul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_mul, 5, 5, 1, 1);

        button_x = new QPushButton(tab);
        button_x->setObjectName("button_x");
        button_x->setMinimumSize(QSize(20, 30));
        button_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_x, 8, 2, 1, 1);

        button_2 = new QPushButton(tab);
        button_2->setObjectName("button_2");
        button_2->setMinimumSize(QSize(20, 30));
        button_2->setFont(font);
        button_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_2, 7, 3, 1, 1);

        button_dot = new QPushButton(tab);
        button_dot->setObjectName("button_dot");
        button_dot->setMinimumSize(QSize(20, 30));
        button_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_dot, 8, 4, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setMaximumSize(QSize(17, 16777215));

        gridLayout_3->addWidget(label_11, 8, 6, 1, 1);

        button_sin = new QPushButton(tab);
        button_sin->setObjectName("button_sin");
        button_sin->setMinimumSize(QSize(20, 30));
        button_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_sin, 5, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(17, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ubuntu")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: #74767b;\n"
"font: 500 10pt \"Ubuntu\";"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 8, 7, 1, 1);

        graph_show = new QCustomPlot(tab);
        graph_show->setObjectName("graph_show");
        graph_show->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(graph_show, 0, 7, 7, 5);

        button_mod = new QPushButton(tab);
        button_mod->setObjectName("button_mod");
        button_mod->setMinimumSize(QSize(20, 30));
        button_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_mod, 4, 4, 1, 1);

        button_right_bracket = new QPushButton(tab);
        button_right_bracket->setObjectName("button_right_bracket");
        button_right_bracket->setMinimumSize(QSize(20, 30));
        button_right_bracket->setFont(font1);
        button_right_bracket->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_right_bracket, 3, 3, 1, 1);

        x_value = new QLineEdit(tab);
        x_value->setObjectName("x_value");
        x_value->setMaximumSize(QSize(90, 23));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ubuntu")});
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(false);
        x_value->setFont(font4);
        x_value->setFocusPolicy(Qt::StrongFocus);
        x_value->setLayoutDirection(Qt::LeftToRight);
        x_value->setStyleSheet(QString::fromUtf8("font: 11pt \"Ubuntu\";\n"
"color: black;\n"
"background-color: white;"));
        x_value->setMaxLength(100);
        x_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        x_value->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout_3->addWidget(x_value, 3, 1, 1, 1);

        button_default_coord_x = new QPushButton(tab);
        button_default_coord_x->setObjectName("button_default_coord_x");
        button_default_coord_x->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #e1e6ed;\n"
"  color: #74767b; \n"
"}"));

        gridLayout_3->addWidget(button_default_coord_x, 8, 10, 1, 1);

        button_equal = new QPushButton(tab);
        button_equal->setObjectName("button_equal");
        button_equal->setMinimumSize(QSize(20, 30));
        button_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 117, 20);\n"
"  color: white; \n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(255, 120, 50), stop: 1 rgb(255, 151, 57));\n"
"}`"));

        gridLayout_3->addWidget(button_equal, 8, 5, 1, 1);

        button_0 = new QPushButton(tab);
        button_0->setObjectName("button_0");
        button_0->setMinimumSize(QSize(20, 30));
        button_0->setFont(font);
        button_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_0, 8, 3, 1, 1);

        button_div = new QPushButton(tab);
        button_div->setObjectName("button_div");
        button_div->setMinimumSize(QSize(20, 30));
        button_div->setFont(font1);
        button_div->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_div, 4, 5, 1, 1);

        button_9 = new QPushButton(tab);
        button_9->setObjectName("button_9");
        button_9->setMinimumSize(QSize(20, 30));
        button_9->setFont(font);
        button_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_9, 5, 4, 1, 1);

        button_sqrt = new QPushButton(tab);
        button_sqrt->setObjectName("button_sqrt");
        button_sqrt->setMinimumSize(QSize(20, 30));
        button_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_sqrt, 4, 3, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");
        label->setFont(font3);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setStyleSheet(QString::fromUtf8("color: #74767b;\n"
"font: 500 10pt \"Ubuntu\";"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label, 3, 0, 1, 1);

        button_8 = new QPushButton(tab);
        button_8->setObjectName("button_8");
        button_8->setMinimumSize(QSize(20, 30));
        button_8->setFont(font);
        button_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(128, 128, 128);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(100, 100, 100), stop: 1 rgb(150, 150, 150));\n"
"}"));

        gridLayout_3->addWidget(button_8, 5, 3, 1, 1);

        button_pow = new QPushButton(tab);
        button_pow->setObjectName("button_pow");
        button_pow->setMinimumSize(QSize(20, 30));
        button_pow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_pow, 4, 2, 1, 1);

        button_del = new QPushButton(tab);
        button_del->setObjectName("button_del");
        button_del->setMinimumSize(QSize(20, 30));
        button_del->setFont(font1);
        button_del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_del, 3, 5, 1, 1);

        spin_coord_x_start = new QSpinBox(tab);
        spin_coord_x_start->setObjectName("spin_coord_x_start");
        spin_coord_x_start->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));
        spin_coord_x_start->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        spin_coord_x_start->setMinimum(-1000000);
        spin_coord_x_start->setMaximum(1000000);
        spin_coord_x_start->setSingleStep(10);
        spin_coord_x_start->setStepType(QAbstractSpinBox::AdaptiveDecimalStepType);

        gridLayout_3->addWidget(spin_coord_x_start, 8, 8, 1, 1);

        button_sub = new QPushButton(tab);
        button_sub->setObjectName("button_sub");
        button_sub->setMinimumSize(QSize(20, 30));
        button_sub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(200, 200, 200);\n"
"    color: black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 rgb(180, 180, 180), stop: 1 rgb(220, 220, 220));\n"
"}"));

        gridLayout_3->addWidget(button_sub, 6, 5, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("ui->input_line->setStyleSheet(\"border-bottom: 1px solid grey;\");\n"
""));

        gridLayout_3->addWidget(label_3, 1, 0, 1, 6);


        gridLayout_2->addLayout(gridLayout_3, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        credit_overpayment = new QLineEdit(tab_2);
        credit_overpayment->setObjectName("credit_overpayment");
        credit_overpayment->setMaximumSize(QSize(200, 16777215));
        credit_overpayment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credit_overpayment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        credit_overpayment->setReadOnly(true);

        gridLayout_4->addWidget(credit_overpayment, 3, 6, 1, 1);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName("label_15");
        label_15->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_15, 5, 1, 1, 1);

        credir_procent = new QLineEdit(tab_2);
        credir_procent->setObjectName("credir_procent");
        credir_procent->setMaximumSize(QSize(200, 16777215));
        credir_procent->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credir_procent->setMaxLength(100);
        credir_procent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(credir_procent, 5, 2, 1, 1);

        credit_total_payment = new QLineEdit(tab_2);
        credit_total_payment->setObjectName("credit_total_payment");
        credit_total_payment->setMaximumSize(QSize(200, 16777215));
        credit_total_payment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credit_total_payment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        credit_total_payment->setReadOnly(true);

        gridLayout_4->addWidget(credit_total_payment, 5, 6, 1, 1);

        credit_calculate = new QPushButton(tab_2);
        credit_calculate->setObjectName("credit_calculate");
        credit_calculate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF7514;\n"
"  color: white; \n"
"	font: 12pt \"Ubuntu\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_4->addWidget(credit_calculate, 10, 2, 1, 1);

        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setMaximumSize(QSize(16777215, 20));
        label_22->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";\n"
"color: #74767b;"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_22, 0, 6, 1, 1);

        label_17 = new QLabel(tab_2);
        label_17->setObjectName("label_17");
        label_17->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_17, 5, 5, 1, 1);

        credit_error = new QLabel(tab_2);
        credit_error->setObjectName("credit_error");
        credit_error->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";"));
        credit_error->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(credit_error, 10, 3, 1, 1);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_19, 7, 1, 1, 1);

        label_43 = new QLabel(tab_2);
        label_43->setObjectName("label_43");
        label_43->setMinimumSize(QSize(0, 0));
        label_43->setMaximumSize(QSize(16777215, 2));

        gridLayout_4->addWidget(label_43, 6, 2, 1, 1);

        credit_payment = new QLineEdit(tab_2);
        credit_payment->setObjectName("credit_payment");
        credit_payment->setMaximumSize(QSize(200, 16777215));
        credit_payment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credit_payment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        credit_payment->setReadOnly(true);

        gridLayout_4->addWidget(credit_payment, 1, 6, 1, 1);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_12, 5, 3, 1, 1);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName("label_20");

        gridLayout_4->addWidget(label_20, 7, 0, 1, 1);

        credit_term_choice = new QComboBox(tab_2);
        credit_term_choice->addItem(QString());
        credit_term_choice->addItem(QString());
        credit_term_choice->setObjectName("credit_term_choice");
        credit_term_choice->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"background-color:  #e1e6ed;\n"
"selection-background-color: #E5E4E2;\n"
""));

        gridLayout_4->addWidget(credit_term_choice, 3, 3, 1, 1);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName("label_18");
        label_18->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_18, 5, 7, 1, 1);

        label_23 = new QLabel(tab_2);
        label_23->setObjectName("label_23");
        label_23->setMaximumSize(QSize(16777215, 2));

        gridLayout_4->addWidget(label_23, 2, 2, 1, 1);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_13, 3, 5, 1, 1);

        label_24 = new QLabel(tab_2);
        label_24->setObjectName("label_24");
        label_24->setMaximumSize(QSize(16777215, 2));

        gridLayout_4->addWidget(label_24, 4, 2, 1, 1);

        label_8 = new QLabel(tab_2);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_8, 1, 3, 1, 1);

        annuitet = new QRadioButton(tab_2);
        annuitet->setObjectName("annuitet");
        annuitet->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(annuitet, 7, 2, 1, 1);

        label_14 = new QLabel(tab_2);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_14, 3, 7, 1, 1);

        label_21 = new QLabel(tab_2);
        label_21->setObjectName("label_21");
        label_21->setMaximumSize(QSize(16777215, 20));
        label_21->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";\n"
"color: #74767b;"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_21, 0, 2, 1, 1);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_10, 3, 1, 1, 1);

        credit_sum = new QLineEdit(tab_2);
        credit_sum->setObjectName("credit_sum");
        credit_sum->setMaximumSize(QSize(200, 16777215));
        credit_sum->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credit_sum->setMaxLength(100);
        credit_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(credit_sum, 1, 2, 1, 1);

        credit_term = new QLineEdit(tab_2);
        credit_term->setObjectName("credit_term");
        credit_term->setMaximumSize(QSize(200, 16777215));
        credit_term->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        credit_term->setMaxLength(100);
        credit_term->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(credit_term, 3, 2, 1, 1);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(30, 16777215));

        gridLayout_4->addWidget(label_16, 5, 4, 1, 1);

        difference = new QRadioButton(tab_2);
        difference->setObjectName("difference");
        difference->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(difference, 8, 2, 1, 1);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_9, 1, 7, 1, 1);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_7, 1, 5, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_4->addWidget(label_6, 1, 1, 1, 1);

        label_63 = new QLabel(tab_2);
        label_63->setObjectName("label_63");
        label_63->setMaximumSize(QSize(16777215, 2));

        gridLayout_4->addWidget(label_63, 9, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        deposit_period_withdraw = new QComboBox(tab_3);
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->addItem(QString());
        deposit_period_withdraw->setObjectName("deposit_period_withdraw");
        deposit_period_withdraw->setMinimumSize(QSize(0, 26));
        deposit_period_withdraw->setMaximumSize(QSize(200, 200));
        deposit_period_withdraw->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"background-color:  #e1e6ed;\n"
"selection-background-color: #E5E4E2;"));

        gridLayout_7->addWidget(deposit_period_withdraw, 9, 2, 1, 1);

        label_27 = new QLabel(tab_3);
        label_27->setObjectName("label_27");
        label_27->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_27, 3, 1, 1, 1);

        deposit_period_payment = new QComboBox(tab_3);
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->addItem(QString());
        deposit_period_payment->setObjectName("deposit_period_payment");
        deposit_period_payment->setMinimumSize(QSize(0, 26));
        deposit_period_payment->setMaximumSize(QSize(200, 200));
        deposit_period_payment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"background-color:  #e1e6ed;\n"
"selection-background-color: #E5E4E2;"));

        gridLayout_7->addWidget(deposit_period_payment, 6, 2, 1, 1);

        deposit_tax_result = new QLineEdit(tab_3);
        deposit_tax_result->setObjectName("deposit_tax_result");
        deposit_tax_result->setMaximumSize(QSize(200, 16777215));
        deposit_tax_result->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_tax_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        deposit_tax_result->setReadOnly(true);

        gridLayout_7->addWidget(deposit_tax_result, 2, 6, 1, 1);

        label_40 = new QLabel(tab_3);
        label_40->setObjectName("label_40");
        label_40->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_40, 2, 5, 1, 1);

        label_31 = new QLabel(tab_3);
        label_31->setObjectName("label_31");
        label_31->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_31, 4, 1, 1, 1);

        label_34 = new QLabel(tab_3);
        label_34->setObjectName("label_34");
        label_34->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_34, 7, 1, 1, 1);

        deposit_procent_CB = new QLineEdit(tab_3);
        deposit_procent_CB->setObjectName("deposit_procent_CB");
        deposit_procent_CB->setMinimumSize(QSize(0, 26));
        deposit_procent_CB->setMaximumSize(QSize(200, 200));
        deposit_procent_CB->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_procent_CB->setMaxLength(100);
        deposit_procent_CB->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_procent_CB, 5, 2, 1, 1);

        deposit_start_term = new QDateEdit(tab_3);
        deposit_start_term->setObjectName("deposit_start_term");
        deposit_start_term->setMinimumSize(QSize(0, 26));
        deposit_start_term->setMaximumSize(QSize(200, 200));
        deposit_start_term->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));
        deposit_start_term->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_start_term, 3, 2, 1, 1);

        deposit_sum = new QLineEdit(tab_3);
        deposit_sum->setObjectName("deposit_sum");
        deposit_sum->setMinimumSize(QSize(0, 26));
        deposit_sum->setMaximumSize(QSize(200, 200));
        deposit_sum->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_sum->setMaxLength(100);
        deposit_sum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_sum, 1, 2, 1, 1);

        deposit_period_replanishment = new QComboBox(tab_3);
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->addItem(QString());
        deposit_period_replanishment->setObjectName("deposit_period_replanishment");
        deposit_period_replanishment->setMinimumSize(QSize(0, 26));
        deposit_period_replanishment->setMaximumSize(QSize(200, 200));
        deposit_period_replanishment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"background-color:  #e1e6ed;\n"
"selection-background-color: #E5E4E2;"));

        gridLayout_7->addWidget(deposit_period_replanishment, 8, 2, 1, 1);

        label_41 = new QLabel(tab_3);
        label_41->setObjectName("label_41");
        label_41->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_41, 3, 5, 1, 1);

        label_49 = new QLabel(tab_3);
        label_49->setObjectName("label_49");
        label_49->setMinimumSize(QSize(10, 0));

        gridLayout_7->addWidget(label_49, 1, 0, 1, 1);

        deposit_date_withdraw = new QDateEdit(tab_3);
        deposit_date_withdraw->setObjectName("deposit_date_withdraw");
        deposit_date_withdraw->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));
        deposit_date_withdraw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_date_withdraw, 9, 3, 1, 1);

        label_50 = new QLabel(tab_3);
        label_50->setObjectName("label_50");
        label_50->setMinimumSize(QSize(10, 0));

        gridLayout_7->addWidget(label_50, 1, 8, 1, 1);

        label_25 = new QLabel(tab_3);
        label_25->setObjectName("label_25");
        label_25->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_25, 1, 1, 1, 1);

        label_26 = new QLabel(tab_3);
        label_26->setObjectName("label_26");
        label_26->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_26, 2, 1, 1, 1);

        label_36 = new QLabel(tab_3);
        label_36->setObjectName("label_36");
        label_36->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_36, 5, 3, 1, 1);

        label_47 = new QLabel(tab_3);
        label_47->setObjectName("label_47");
        label_47->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_47, 8, 5, 1, 1);

        deposit_error = new QLabel(tab_3);
        deposit_error->setObjectName("deposit_error");
        deposit_error->setStyleSheet(QString::fromUtf8("font: 500 12pt \"Ubuntu\";"));
        deposit_error->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(deposit_error, 10, 3, 1, 1);

        deposit_calculation = new QPushButton(tab_3);
        deposit_calculation->setObjectName("deposit_calculation");
        deposit_calculation->setMinimumSize(QSize(0, 26));
        deposit_calculation->setMaximumSize(QSize(200, 200));
        deposit_calculation->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF7514;\n"
"  color: white; \n"
"	font: 12pt \"Ubuntu\";\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));

        gridLayout_7->addWidget(deposit_calculation, 10, 2, 1, 1);

        deposit_date_replanishment = new QDateEdit(tab_3);
        deposit_date_replanishment->setObjectName("deposit_date_replanishment");
        deposit_date_replanishment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";"));
        deposit_date_replanishment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_date_replanishment, 8, 3, 1, 1);

        label_35 = new QLabel(tab_3);
        label_35->setObjectName("label_35");
        label_35->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_35, 5, 1, 1, 1);

        label_32 = new QLabel(tab_3);
        label_32->setObjectName("label_32");
        label_32->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_32, 4, 3, 1, 1);

        label_42 = new QLabel(tab_3);
        label_42->setObjectName("label_42");
        label_42->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_42, 0, 6, 1, 1);

        label_33 = new QLabel(tab_3);
        label_33->setObjectName("label_33");
        label_33->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_33, 6, 1, 1, 1);

        deposit_sum_result = new QLineEdit(tab_3);
        deposit_sum_result->setObjectName("deposit_sum_result");
        deposit_sum_result->setMaximumSize(QSize(200, 16777215));
        deposit_sum_result->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_sum_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        deposit_sum_result->setReadOnly(true);

        gridLayout_7->addWidget(deposit_sum_result, 3, 6, 1, 1);

        label_39 = new QLabel(tab_3);
        label_39->setObjectName("label_39");
        label_39->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_39, 1, 5, 1, 1);

        deposit_term = new QLineEdit(tab_3);
        deposit_term->setObjectName("deposit_term");
        deposit_term->setMinimumSize(QSize(0, 26));
        deposit_term->setMaximumSize(QSize(200, 200));
        deposit_term->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_term->setMaxLength(100);
        deposit_term->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_term, 2, 2, 1, 1);

        label_28 = new QLabel(tab_3);
        label_28->setObjectName("label_28");
        label_28->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_28, 1, 3, 1, 1);

        label_29 = new QLabel(tab_3);
        label_29->setObjectName("label_29");
        label_29->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_29, 8, 1, 1, 1);

        deposit_sum_replanishment = new QLineEdit(tab_3);
        deposit_sum_replanishment->setObjectName("deposit_sum_replanishment");
        deposit_sum_replanishment->setMaximumSize(QSize(200, 16777215));
        deposit_sum_replanishment->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_sum_replanishment->setMaxLength(100);
        deposit_sum_replanishment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_sum_replanishment, 8, 4, 1, 1);

        label_30 = new QLabel(tab_3);
        label_30->setObjectName("label_30");
        label_30->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_30, 9, 1, 1, 1);

        deposit_sum_withdraw = new QLineEdit(tab_3);
        deposit_sum_withdraw->setObjectName("deposit_sum_withdraw");
        deposit_sum_withdraw->setMaximumSize(QSize(200, 16777215));
        deposit_sum_withdraw->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_sum_withdraw->setMaxLength(100);
        deposit_sum_withdraw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_sum_withdraw, 9, 4, 1, 1);

        deposit_term_type = new QComboBox(tab_3);
        deposit_term_type->addItem(QString());
        deposit_term_type->addItem(QString());
        deposit_term_type->addItem(QString());
        deposit_term_type->setObjectName("deposit_term_type");
        deposit_term_type->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"background-color:  #e1e6ed;\n"
"selection-background-color: #E5E4E2;"));

        gridLayout_7->addWidget(deposit_term_type, 2, 3, 1, 1);

        label_48 = new QLabel(tab_3);
        label_48->setObjectName("label_48");
        label_48->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_48, 9, 5, 1, 1);

        label_46 = new QLabel(tab_3);
        label_46->setObjectName("label_46");
        label_46->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_46, 3, 7, 1, 1);

        label_37 = new QLabel(tab_3);
        label_37->setObjectName("label_37");
        label_37->setMaximumSize(QSize(16777215, 20));
        label_37->setStyleSheet(QString::fromUtf8("font: 10pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_37, 11, 1, 1, 1);

        label_45 = new QLabel(tab_3);
        label_45->setObjectName("label_45");
        label_45->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_45, 2, 7, 1, 1);

        deposit_procent = new QLineEdit(tab_3);
        deposit_procent->setObjectName("deposit_procent");
        deposit_procent->setMinimumSize(QSize(0, 26));
        deposit_procent->setMaximumSize(QSize(200, 200));
        deposit_procent->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_procent->setMaxLength(100);
        deposit_procent->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(deposit_procent, 4, 2, 1, 1);

        label_38 = new QLabel(tab_3);
        label_38->setObjectName("label_38");
        label_38->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));
        label_38->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_38, 0, 2, 1, 1);

        label_44 = new QLabel(tab_3);
        label_44->setObjectName("label_44");
        label_44->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"color: #74767b;"));

        gridLayout_7->addWidget(label_44, 1, 7, 1, 1);

        deposit_procent_result = new QLineEdit(tab_3);
        deposit_procent_result->setObjectName("deposit_procent_result");
        deposit_procent_result->setMaximumSize(QSize(200, 16777215));
        deposit_procent_result->setStyleSheet(QString::fromUtf8("font: 12pt \"Ubuntu\";\n"
"background-color: white;\n"
"color: black;"));
        deposit_procent_result->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        deposit_procent_result->setReadOnly(true);

        gridLayout_7->addWidget(deposit_procent_result, 1, 6, 1, 1);

        deposit_capitalization = new QCheckBox(tab_3);
        deposit_capitalization->setObjectName("deposit_capitalization");
        deposit_capitalization->setMinimumSize(QSize(20, 20));
        deposit_capitalization->setMaximumSize(QSize(16777215, 200));
        deposit_capitalization->setBaseSize(QSize(20, 20));
        QFont font5;
        font5.setPointSize(10);
        deposit_capitalization->setFont(font5);
        deposit_capitalization->setStyleSheet(QString::fromUtf8("\n"
"QCheckBox::indicator {\n"
"  width: 26px;\n"
"  height: 26px;\n"
"}\n"
"font: 12pt \"Ubuntu\";\n"
"color: #74767b;\n"
"\n"
"QCheckBox::indicator:checked {\n"
"  iimage: url(./checkbox.png)\n"
"}"));
        deposit_capitalization->setIconSize(QSize(40, 40));

        gridLayout_7->addWidget(deposit_capitalization, 7, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_7, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc_v1.0 by norridge", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_left_bracket->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276", nullptr));
        button_pi->setText(QCoreApplication::translate("MainWindow", "\317\200", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        button_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_graph_clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\276\321\202", nullptr));
        button_graph_create->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        button_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        button_e->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        label_11->setText(QString());
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Ox", nullptr));
        button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        button_right_bracket->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        x_value->setText(QString());
        x_value->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        button_default_coord_x->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x = ", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_pow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        button_del->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        button_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        label_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\275\320\266\320\265\320\275\320\265\321\200\320\275\321\213\320\271", nullptr));
        credit_overpayment->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        credir_procent->setInputMask(QString());
        credir_procent->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        credit_total_payment->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        credit_calculate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        credit_error->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276\320\263\320\276 \320\277\320\273\320\260\321\202\320\265\320\266\320\260", nullptr));
        label_43->setText(QString());
        credit_payment->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_20->setText(QString());
        credit_term_choice->setItemText(0, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));
        credit_term_choice->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_23->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_24->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        annuitet->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\217 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        credit_sum->setInputMask(QString());
        credit_sum->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        credit_term->setInputMask(QString());
        credit_term->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_16->setText(QString());
        difference->setText(QCoreApplication::translate("MainWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_63->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        deposit_period_withdraw->setItemText(0, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267\320\276\320\262\320\276\320\265", nullptr));
        deposit_period_withdraw->setItemText(1, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_withdraw->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        deposit_period_withdraw->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_withdraw->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_withdraw->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_27->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\320\276 \321\201\321\200\320\276\320\272\320\260", nullptr));
        deposit_period_payment->setItemText(0, QCoreApplication::translate("MainWindow", "\320\272\320\260\320\266\320\264\321\213\320\271 \320\264\320\265\320\275\321\214", nullptr));
        deposit_period_payment->setItemText(1, QCoreApplication::translate("MainWindow", "\320\272\320\260\320\266\320\264\321\203\321\216 \320\275\320\265\320\264\320\265\320\273\321\216", nullptr));
        deposit_period_payment->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_payment->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_payment->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_payment->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));
        deposit_period_payment->setItemText(6, QCoreApplication::translate("MainWindow", "\320\262 \320\272\320\276\320\275\321\206\320\265 \321\201\321\200\320\276\320\272\320\260", nullptr));

        deposit_tax_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_40->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_34->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        deposit_procent_CB->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        deposit_start_term->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        deposit_sum->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        deposit_period_replanishment->setItemText(0, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267\320\276\320\262\320\276\320\265", nullptr));
        deposit_period_replanishment->setItemText(1, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        deposit_period_replanishment->setItemText(2, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 2 \320\274\320\265\321\201\321\217\321\206\320\260", nullptr));
        deposit_period_replanishment->setItemText(3, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        deposit_period_replanishment->setItemText(4, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        deposit_period_replanishment->setItemText(5, QCoreApplication::translate("MainWindow", "\321\200\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_41->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260 \320\262\320\272\320\273\320\260\320\264\320\265 \320\272 \320\272\320\276\320\275\321\206\321\203 \321\201\321\200\320\276\320\272\320\260", nullptr));
        label_49->setText(QString());
        deposit_date_withdraw->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        label_50->setText(QString());
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_36->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_47->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        deposit_error->setText(QString());
        deposit_calculation->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        deposit_date_replanishment->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd/MM/yyyy", nullptr));
        label_35->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\321\216\321\207\320\265\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260 \320\246\320\221", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_42->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_33->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        deposit_sum_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_39->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213", nullptr));
        deposit_term->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
#if QT_CONFIG(whatsthis)
        label_29->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265*", nullptr));
        deposit_sum_replanishment->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "\320\241\320\275\321\217\321\202\320\270\320\265*", nullptr));
        deposit_sum_withdraw->setPlaceholderText(QCoreApplication::translate("MainWindow", "0", nullptr));
        deposit_term_type->setItemText(0, QCoreApplication::translate("MainWindow", "\320\264\320\275\320\265\320\271", nullptr));
        deposit_term_type->setItemText(1, QCoreApplication::translate("MainWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));
        deposit_term_type->setItemText(2, QCoreApplication::translate("MainWindow", "\320\273\320\265\321\202", nullptr));

        label_48->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_46->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        label_37->setText(QCoreApplication::translate("MainWindow", "*\320\235\320\265\320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\277\320\276\320\273\321\217", nullptr));
        label_45->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        deposit_procent->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        label_38->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\321\217 \320\264\320\273\321\217 \320\262\320\262\320\276\320\264\320\260", nullptr));
        label_44->setText(QCoreApplication::translate("MainWindow", "\342\202\275", nullptr));
        deposit_procent_result->setPlaceholderText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        deposit_capitalization->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
