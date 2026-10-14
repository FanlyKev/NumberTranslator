#ifndef NUMTRANSDLG_H
#define NUMTRANSDLG_H

#include <QDialog>

class QLineEdit;
class numtransdlg : public QDialog
{
    Q_OBJECT

public:
    explicit numtransdlg(QWidget *parent = nullptr);
    ~numtransdlg() override;

private:
    QLineEdit* decEdit;
    QLineEdit* hexEdit;
    QLineEdit* binEdit;
};

#endif // NUMTRANSDLG_H
