#ifndef RIVER_H
#define RIVER_H
#include "QString"
#include <QObject>

class River: public QObject
{
    Q_OBJECT

public:
    River(QString ID, QString Name, QString Length, QString Fallin, QString Flow, QString Area, QObject *parent = nullptr );
    virtual ~River();
    void SetID(QString ID);
    void SetName(QString Name);
    void SetLength(QString Length);
    void SetFallin(QString Fallin);
    void SetFlow(QString Flow);
    void SetArea(QString Area);

    QString ID();
    QString Name();
    QString Length();
    QString Fallin();
    QString Flow();
    QString Area();
private:
    QString id;
    QString name;
    QString length;
    QString fallin;
    QString flow;
    QString area;
};
#endif // RIVER_H
