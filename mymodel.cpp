#include "mymodel.h"

MyModel::MyModel(QObject *parent)
    :QAbstractTableModel(parent)
{
    River* std1 = new River("101","Енисей","5550","Байкал","19800","2580",this);
    River* std2 = new River("102","Обь","5410","Иртыш","12300","2990",this);
    River* std3 = new River("103","Волга","3731","Ока","8060","1360",this);
    AddRiver(std1);
    AddRiver(std2);
    AddRiver(std3);
}

int MyModel::rowCount(const QModelIndex &) const
{
   return rivers.count();
}

int MyModel::columnCount(const QModelIndex &) const
{
    return 6;
}


QVariant MyModel::data(const QModelIndex &index, int role) const
{
    if (role == Qt::DisplayRole)
    {
        QString Value = "";
        River* std = rivers.at(index.row());
        if (index.column() == 0){Value = std->ID();}
        else if (index.column() == 1){Value = std->Name();}
        else if (index.column() == 2){Value = std->Length();}
        else if (index.column() == 3){Value = std->Fallin();}
        else if (index.column() == 4){Value = std->Flow();}
        else if (index.column() == 5){Value = std->Area();}
        else {Value = "";};
       return Value;
    }
    return QVariant();
}


QVariant MyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole)
    {
        if (orientation == Qt::Horizontal) {
            switch (section)
            {
            case 0:
                return QString("ID");
            case 1:
                return QString("Название");
            case 2:
                return QString("Протяжённость");
            case 3:
                return QString("Впадает в");
            case 4:
                return QString("Годовой сток");
            case 5:
                return QString("Площадь бассейна");
            }
        }
    }
    return QVariant();
}


bool MyModel::setData(const QModelIndex & index, const QVariant & value, int role)
{
   if (role == Qt::EditRole)
    {
        River* std = rivers.at(index.row());
        if (index.column() == 0){std->SetID(value.toString());}
        else if (index.column() == 1){std->SetName(value.toString());}
        else if (index.column() == 2){std->SetLength(value.toString());}
        else if (index.column() == 3){std->SetFallin(value.toString());}
        else if (index.column() == 4){std->SetFlow(value.toString());}
        else if (index.column() == 5){std->SetArea(value.toString());}
    }
    return true;
}

Qt::ItemFlags MyModel::flags(const QModelIndex & /*index*/) const
{
    return Qt::ItemIsSelectable |  Qt::ItemIsEditable | Qt::ItemIsEnabled;
}




void MyModel::AddRiver(River* river)
{
    beginInsertRows(QModelIndex(),rivers.size(),rivers.size());
    rivers.append(river);
    endInsertRows();
    //emit layoutChanged();
}

void MyModel::DeleteRiver(int row)
{
    beginRemoveRows(QModelIndex(),row,row);
    rivers.removeAt(row);
    endRemoveRows();
    //emit layoutChanged();
}

