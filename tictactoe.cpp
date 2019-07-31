#include "tictactoe.h"
#include <QDebug>

TicTacToe::TicTacToe(QObject *parent): QObject (parent){
    for(int i=0; i<SIZE ; i++){
        array<<0;
    }
}

void TicTacToe::setCounter123(int mCounter1, int mIndexArray)
{
    counter1 =mCounter1;
    array[mIndexArray]= counter1;
    qDebug()<< "array[mIndexArr]="<< array[mIndexArray];
    logikButton123();
} //-----------button 1-2-3--------------


void TicTacToe::setCounter456(int mCounter1, int mIndexArray)
{
    counter1 =mCounter1;
    array[mIndexArray]=counter1;
     qDebug()<< "array[mIndexArr]="<< array[mIndexArray];
    logikButton456();
} // -----------button 4-5-6------------


void TicTacToe::setCounter789(int mCounter1, int mIndexArray)
{
    counter1 =mCounter1;
    array[mIndexArray]=counter1;
    qDebug()<< "array[mIndexArr]="<< array[mIndexArray];
    logikButton789();
} //------------button 7-8-9------------

