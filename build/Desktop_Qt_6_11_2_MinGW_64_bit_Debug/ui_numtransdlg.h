/********************************************************************************
** Form generated from reading UI file 'numtransdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMTRANSDLG_H
#define UI_NUMTRANSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_numtransdlg
{
public:

    void setupUi(QDialog *numtransdlg)
    {
        if (numtransdlg->objectName().isEmpty())
            numtransdlg->setObjectName("numtransdlg");
        numtransdlg->resize(800, 600);

        retranslateUi(numtransdlg);

        QMetaObject::connectSlotsByName(numtransdlg);
    } // setupUi

    void retranslateUi(QDialog *numtransdlg)
    {
        numtransdlg->setWindowTitle(QCoreApplication::translate("numtransdlg", "numtransdlg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class numtransdlg: public Ui_numtransdlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMTRANSDLG_H
