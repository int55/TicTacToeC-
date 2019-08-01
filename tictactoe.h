#ifndef TICTACTOE_H
#define TICTACTOE_H
#include <QObject>
#include <QDebug>
#include<QList>
#define SIZE 9

class TicTacToe: public QObject
{
    Q_OBJECT
public: 
    TicTacToe(QObject * parent= 0);
    void logikButton();
signals:
    void signalCross();
    void signalNull(); 
public slots:
    void setCounter(int Counter1, int IndexArray);
private:
        int m_Counter1;
        QList<int>array;

};

#endif // TICTACTOE_H
