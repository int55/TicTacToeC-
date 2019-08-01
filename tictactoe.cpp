#include "tictactoe.h"
#include <QDebug>

TicTacToe::TicTacToe(QObject *parent): QObject (parent){
    for(int i=0; i<SIZE ; i++){
        array<<0;
    }
}

void TicTacToe::setCounter(int Counter1, int IndexArray)
{
    m_Counter1 =Counter1;
    array[IndexArray]= m_Counter1;
    //qDebug()<< "array[IndexArr]="<< array[IndexArray];
    logikButton();
} //-----------button 1-2-3--------------
