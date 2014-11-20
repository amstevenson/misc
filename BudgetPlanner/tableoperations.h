#ifndef TABLEOPERATIONS_H
#define TABLEOPERATIONS_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QModelIndex>
#include "qstringlist.h"

// namespace for the Enumerators that determine the state of the account setup ui table
QT_BEGIN_NAMESPACE
namespace TABLESECTION
{
    enum state { INCOME, EXPENSES, BUDGET, FINISH };
}
QT_END_NAMESPACE

class TableOperations : public QMainWindow
{
public:
    TableOperations(QMainWindow *parent);

    QStringList incomeType;
    QStringList getRowInformation(QStandardItemModel *, int);

    bool checkForNullRows(QStandardItemModel *, int);
    int getUserBudgetAmount(QStringList);
    void addTableItemFromList(QStandardItemModel *, QStringList);
    void setRowInformation(QStandardItemModel *, QStringList, int);

    // Enum to control the state of the account setup form
    TABLESECTION::state getState(QString);
};

#endif // TABLEOPERATIONS_H
