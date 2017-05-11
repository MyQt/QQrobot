/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QLineEdit *qqnum;
    QLineEdit *qqpass;
    QPushButton *rtnButton;
    QLabel *verifyImg;
    QLineEdit *verifyCode;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QStringLiteral("LoginDlg"));
        LoginDlg->setWindowModality(Qt::NonModal);
        LoginDlg->resize(394, 240);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/logo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        LoginDlg->setWindowIcon(icon);
        LoginDlg->setModal(false);
        qqnum = new QLineEdit(LoginDlg);
        qqnum->setObjectName(QStringLiteral("qqnum"));
        qqnum->setGeometry(QRect(82, 102, 181, 31));
        qqpass = new QLineEdit(LoginDlg);
        qqpass->setObjectName(QStringLiteral("qqpass"));
        qqpass->setGeometry(QRect(80, 140, 181, 31));
        qqpass->setEchoMode(QLineEdit::Password);
        rtnButton = new QPushButton(LoginDlg);
        rtnButton->setObjectName(QStringLiteral("rtnButton"));
        rtnButton->setGeometry(QRect(280, 140, 81, 31));
        verifyImg = new QLabel(LoginDlg);
        verifyImg->setObjectName(QStringLiteral("verifyImg"));
        verifyImg->setGeometry(QRect(220, 180, 121, 51));
        verifyImg->setPixmap(QPixmap(QString::fromUtf8(":/img/captcha.jpg")));
        verifyCode = new QLineEdit(LoginDlg);
        verifyCode->setObjectName(QStringLiteral("verifyCode"));
        verifyCode->setGeometry(QRect(80, 190, 121, 31));
        label = new QLabel(LoginDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 61, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/qqlogo.png")));
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 30, 171, 31));
        QFont font;
        font.setPointSize(21);
        label_2->setFont(font);
        QWidget::setTabOrder(qqnum, qqpass);
        QWidget::setTabOrder(qqpass, verifyCode);
        QWidget::setTabOrder(verifyCode, rtnButton);

        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "QQrobot login", Q_NULLPTR));
        rtnButton->setText(QApplication::translate("LoginDlg", "\347\241\256\345\256\232", Q_NULLPTR));
        verifyImg->setText(QString());
        label->setText(QString());
        label_2->setText(QApplication::translate("LoginDlg", "\350\264\246\345\217\267\345\257\206\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
