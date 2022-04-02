#include "editriverdialog.h"
#include "river.h"
EditRiverDialog::EditRiverDialog(QWidget* pwgt): QDialog(pwgt)
{
    editID = new QLineEdit();
    editName = new QLineEdit();
    editLength = new QLineEdit();
    editFallin = new QLineEdit();
    editFlow = new QLineEdit();
    editArea = new QLineEdit();

    QGridLayout* mainLayout = new QGridLayout;
    mainLayout->addWidget(new QLabel("ID"),1,1);
    mainLayout->addWidget(editID,1,2);
    mainLayout->addWidget(new QLabel("Название"),2,1);
    mainLayout->addWidget(editName,2,2);
    mainLayout->addWidget(new QLabel("Протяженность"),3,1);
    mainLayout->addWidget(editLength,3,2);
    mainLayout->addWidget(new QLabel("Впадает в"),4,1);
    mainLayout->addWidget(editFallin,4,2);
    mainLayout->addWidget(new QLabel("Годовой сток"),5,1);
    mainLayout->addWidget(editFlow,5,2);
    mainLayout->addWidget(new QLabel("Площадь бассейна"),6,1);
    mainLayout->addWidget(editArea,6,2);


    QPushButton* btnOk = new QPushButton("&ОК");

     mainLayout->addWidget(btnOk,7,1,1,2);

    QObject::connect(btnOk, SIGNAL(clicked()), this, SLOT(accept()));

    this->setLayout(mainLayout);
    this->setWindowTitle("Данные о речках наших русских");


    //Располагаем диалог над основным окном
    int gx = 100;
    int gy = 100;
    if (pwgt!=nullptr)
    {
        gx = pwgt->geometry().x();
        gy = pwgt->geometry().y();

    }
    this->setGeometry(gx+10,gy+10,300,150);
}

QString EditRiverDialog::id() const
{
    return editID->text();
}
QString EditRiverDialog::name() const
{
    return editName->text();
}
QString EditRiverDialog::length() const
{
    return editLength->text();
}
QString EditRiverDialog::fallin() const
{
    return editFallin->text();
}
QString EditRiverDialog::flow() const
{
    return editFlow->text();
}
QString EditRiverDialog::area() const
{
    return editArea->text();
}

void EditRiverDialog::SetUpDialog(QString id, QString name, QString length, QString fallin, QString flow, QString area)
{
    editID->setText(id);
    editName->setText(name);
    editLength->setText(length);
    editFallin->setText(fallin);
    editFlow->setText(flow);
    editArea->setText(area);
}
