/*#ifndef EDITRIVERDIALOG_H
#define EDITRIVERDIALOG_H

#endif // EDITRIVERDIALOG_H*/
#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include "river.h"

class EditRiverDialog : public QDialog
{
  Q_OBJECT

private:
    QLineEdit* editID;
    QLineEdit* editName;
    QLineEdit* editLength;
    QLineEdit* editFallin;
    QLineEdit* editFlow;
    QLineEdit* editArea;

public:
    EditRiverDialog(QWidget* pwgt = nullptr);

    QString id() const;
    QString name() const;
    QString length() const;
    QString fallin() const;
    QString flow() const;
    QString area() const;

    void SetUpDialog(QString id, QString name, QString length, QString fallin, QString flow, QString area);
};

#endif // INPUTDIALOG_H

