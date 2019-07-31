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
    void logikButton123();
    void logikButton456();
    void logikButton789();
signals:
    void signalCross();
    void signalNull();
public slots:
    void setCounter123(int mCounter1, int mIndexArray);
    void setCounter456(int mCounter1, int mIndexArray);
    void setCounter789(int mCounter1, int mIndexArray);
//    void setCounter8(int mCounter1);
//    void setCounter9(int mCounter1);

private:
        int counter1;
        QList<int>array;
};

#endif // TICTACTOE_H
