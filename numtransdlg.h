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

private slots:
    void decChanged(const QString&);
    void hexChanged(const QString&);
    void binChanged(const QString&);
};

#endif // NUMTRANSDLG_H
