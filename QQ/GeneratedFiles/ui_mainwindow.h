/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QPushButton *sendButton;
    QTextBrowser *textBrowser;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListView *qqFriendList;
    QWidget *tab_2;
    QListView *qqGroupList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *robotLayout;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *receiverName;
    QLineEdit *txuinLineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_copyright;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(927, 620);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 470, 641, 91));
        sendButton = new QPushButton(centralWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(660, 530, 41, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 641, 381));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(660, 0, 261, 461));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        qqFriendList = new QListView(tab);
        qqFriendList->setObjectName(QStringLiteral("qqFriendList"));
        qqFriendList->setGeometry(QRect(0, 0, 256, 431));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        qqGroupList = new QListView(tab_2);
        qqGroupList->setObjectName(QStringLiteral("qqGroupList"));
        qqGroupList->setGeometry(QRect(0, 0, 251, 451));
        tabWidget->addTab(tab_2, QString());
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(90, 400, 561, 31));
        robotLayout = new QHBoxLayout(horizontalLayoutWidget);
        robotLayout->setSpacing(6);
        robotLayout->setContentsMargins(11, 11, 11, 11);
        robotLayout->setObjectName(QStringLiteral("robotLayout"));
        robotLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 410, 81, 16));
        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 430, 561, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        receiverName = new QLabel(horizontalLayoutWidget_2);
        receiverName->setObjectName(QStringLiteral("receiverName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(receiverName->sizePolicy().hasHeightForWidth());
        receiverName->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(receiverName);

        txuinLineEdit = new QLineEdit(horizontalLayoutWidget_2);
        txuinLineEdit->setObjectName(QStringLiteral("txuinLineEdit"));
        sizePolicy.setHeightForWidth(txuinLineEdit->sizePolicy().hasHeightForWidth());
        txuinLineEdit->setSizePolicy(sizePolicy);
        txuinLineEdit->setReadOnly(true);

        horizontalLayout->addWidget(txuinLineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_copyright = new QLabel(centralWidget);
        label_copyright->setObjectName(QStringLiteral("label_copyright"));
        label_copyright->setGeometry(QRect(660, 470, 251, 51));
        label_copyright->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 927, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QQrobot", Q_NULLPTR));
        sendButton->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\245\275\345\217\213", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\276\244", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\234\272\345\231\250\344\272\272\345\210\227\350\241\250\357\274\232", Q_NULLPTR));
        receiverName->setText(QApplication::translate("MainWindow", "\344\277\241\346\201\257\346\216\245\346\224\266\350\200\205", Q_NULLPTR));
        label_copyright->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">QQrobot </span>1.0.0<br/><span style=\" font-weight:600;\">Author: </span>Jeffrey Lee <br/><span style=\" font-weight:600;\">Email: </span><span style=\" font-weight:600; color:#00557f;\">vipjeffreylee@gmail.com </span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
