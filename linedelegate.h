#ifndef LINEDELEGATE_H
#define LINEDELEGATE_H

#include "QtWidgets"

class lineDelegate: public QStyledItemDelegate
{
    Q_OBJECT
public:
    lineDelegate(QObject *parent = nullptr);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void paint(QPainter* painter,
               const QStyleOptionViewItem &option,
               const QModelIndex &index) const;

};

#endif // LINEDELEGATE_H
