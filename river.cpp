#include "river.h"

River::River(QString ID, QString Name, QString Length, QString Fallin, QString Flow, QString Area, QObject *parent): QObject(parent)
{
    id = ID;
    name = Name;
    length = Length;
    fallin = Fallin;
    flow = Flow;
    area = Area;
}

void River::SetID(QString ID)
{
    id = ID;
}
void River::SetName(QString Name)
{
    name = Name;
}
void River::SetLength(QString Length)
{
    length = Length;
}
void River::SetFallin(QString Fallin)
{
    fallin = Fallin;
}
void River::SetFlow(QString Flow)
{
    flow = Flow;
}
void River::SetArea(QString Area)
{
    area = Area;
}
QString River::ID()
{
    return id;
}
QString River::Name()
{
    return name;
}
QString River::Length()
{
    return length;
}
QString River::Fallin()
{
    return fallin;
}
QString River::Flow()
{
    return flow;
}
QString River::Area()
{
    return area;
}
 River::~River()
{
}
