#ifndef DIALOGDELEGATE_H
#define DIALOGDELEGATE_H

#include "QtWidgets"

class DialogDelegate: public QStyledItemDelegate
{
    Q_OBJECT
public:
    DialogDelegate(QObject *parent = nullptr, QWidget* parentWidget = nullptr);

    bool editorEvent(QEvent *event, QAbstractItemModel *model,
                     const QStyleOptionViewItem &option, const QModelIndex &index);
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const;

    private:
    QWidget* dparentWidget;
};

#endif // DIALOGDELEGATE_H
