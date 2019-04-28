/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *versionLineEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *urlLineEdit;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *changelogLineEdit;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *mandatoryComboBox;
    QPushButton *buildBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(449, 368);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 0, 391, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(19, 70, 391, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        versionLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        versionLineEdit->setObjectName(QString::fromUtf8("versionLineEdit"));

        horizontalLayout_2->addWidget(versionLineEdit);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(20, 120, 391, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        urlLineEdit = new QLineEdit(horizontalLayoutWidget_3);
        urlLineEdit->setObjectName(QString::fromUtf8("urlLineEdit"));

        horizontalLayout_3->addWidget(urlLineEdit);

        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(20, 170, 391, 41));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        changelogLineEdit = new QLineEdit(horizontalLayoutWidget_4);
        changelogLineEdit->setObjectName(QString::fromUtf8("changelogLineEdit"));

        horizontalLayout_4->addWidget(changelogLineEdit);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 220, 391, 41));
        horizontalLayout_7 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMidLineWidth(0);

        horizontalLayout_7->addWidget(label_6);

        mandatoryComboBox = new QComboBox(horizontalLayoutWidget_5);
        mandatoryComboBox->addItem(QString());
        mandatoryComboBox->addItem(QString());
        mandatoryComboBox->setObjectName(QString::fromUtf8("mandatoryComboBox"));

        horizontalLayout_7->addWidget(mandatoryComboBox);

        buildBtn = new QPushButton(centralWidget);
        buildBtn->setObjectName(QString::fromUtf8("buildBtn"));
        buildBtn->setGeometry(QRect(170, 280, 80, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 449, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\351\205\215\347\275\256\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MainWindow", "\347\211\210\346\234\254", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "version:  ", nullptr));
        versionLineEdit->setText(QApplication::translate("MainWindow", "0.0.0.0", nullptr));
#ifndef QT_NO_TOOLTIP
        label_2->setToolTip(QApplication::translate("MainWindow", "\346\233\264\346\226\260\345\214\205\345\234\260\345\235\200", nullptr));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("MainWindow", "url:      ", nullptr));
        urlLineEdit->setText(QApplication::translate("MainWindow", "http://localhost/downloads/update.zip", nullptr));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("MainWindow", "\346\233\264\346\226\260\350\257\246\346\203\205\345\234\260\345\235\200", nullptr));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("MainWindow", "changelog:", nullptr));
        changelogLineEdit->setText(QApplication::translate("MainWindow", "http://localhost/downloads/update.html", nullptr));
#ifndef QT_NO_TOOLTIP
        label_6->setToolTip(QApplication::translate("MainWindow", "\345\274\272\345\210\266\346\233\264\346\226\260", nullptr));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("MainWindow", "mandatory:", nullptr));
        mandatoryComboBox->setItemText(0, QApplication::translate("MainWindow", "false", nullptr));
        mandatoryComboBox->setItemText(1, QApplication::translate("MainWindow", "true", nullptr));

        buildBtn->setText(QApplication::translate("MainWindow", "Build", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
