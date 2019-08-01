#include <tictactoe.h>
#include <QDebug>

void TicTacToe::logikButton()
{       //-----------------button 1 -----------
    if((array[0]%2!=0)&&(array[1]%2!=0)&&(array[2]%2!=0)) //0-1-2 cross
    {
        emit signalCross();
    }else if(array[0]!=0&&array[0]%2==0 && array[1]%2==0&&array[1]!=0 && array[2]!=0&&array[2]%2==0)
    {
        emit signalNull();
    }else
    if((array[0]%2!=0)&&(array[3]%2!=0)&&(array[6]%2!=0)) //0-3-6 cross
    {
        emit signalCross();
    }else if ((array[0]!=0&&array[0]%2==0)&&(array[3]%2==0&&array[3]!=0)&&array[6]%2==0&&array[6]!=0)
    {
        emit signalNull();
    }else
    if((array[0]%2!=0)&&(array[4]%2!=0)&&(array[8]%2!=0)) //0-4-8 cross
    {
        emit signalCross();
    }else if (array[0]!=0 && array[0]%2==0&&array[4]%2==0&&array[4]!=0&&array[8]!=0&&array[8]%2==0)
    {
        emit signalNull();
    }
        //---------------button 2 -------------

    if((array[0]%2!=0)&&(array[1]%2!=0)&&(array[2]%2!=0)) //0-1-2 cross
    {
            emit signalCross();
    }else if (array[0]!=0&&array[0]%2==0 && array[1]%2==0&&array[1]!=0 && array[2]%2==0&&array[2]!=0)
    {
            emit signalNull();
    }else
    if((array[1]%2!=0)&&(array[4]%2!=0)&&(array[7]%2!=0)) //1-4-7 cross
    {
            emit signalCross();
    }else
    if (array[1]!=0 && array[1]%2==0 && array[4]!=0&&array[4]%2==0 && array[7]%2==0&&array[7])
    {
            emit signalNull();
    }else
        //---------------button 3 -------------

    if((array[0]%2!=0)&&(array[1]%2!=0)&&(array[2]%2!=0)) //0-1-2 cross
    {
            emit signalCross();
    }else
        if ((array[0]!=0&&array[0]%2==0)&&(array[1]!=0&&array[1]%2==0)&&(array[2]!=0&&array[2]%2==0))
    {
            emit signalNull();
    }else

    if((array[2]%2!=0)&&(array[5]%2!=0)&&(array[8]%2!=0)) //2-5-8 cross
    {
            emit signalCross();
    }else if ((array[2]!=0&&array[2]%2==0)&&(array[5]!=0&&array[5]%2==0)&&(array[8]!=0&&array[8]%2==0))
    {
            emit signalNull();
    }else

    if((array[2]%2!=0)&&(array[4]%2!=0)&&(array[6]%2!=0)) //2-4-6 cross
    {
            emit signalCross();
    } else if((array[2]!=0&&array[2]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[6]!=0&&array[6]%2==0))
    {
            emit signalNull();
    }else
        //-----------button 4----------
    if((array[0]%2!=0)&&(array[3]%2!=0)&&(array[6]%2!=0)) //0-3-6 cross
    {
        emit signalCross();
    }else if ((array[0]!=0&&array[0]%2==0)&&(array[3]!=0&&array[3]%2==0)&&(array[6]!=0&&array[6]%2==0))
    {
        emit signalNull();
    }
    else
    if((array[3]%2!=0)&&(array[4]%2!=0)&&(array[5]%2!=0)) //3-4-5 cross
    {
        emit signalCross();
    }else if ((array[3]!=0&&array[3]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[5]!=0&&array[5]%2==0))
    {
        emit signalNull();
    }else
        //------------button 5---------
        if((array[0]%2!=0)&&(array[4]%2!=0)&&(array[8]%2!=0)) //0-4-8 cross
        {
            emit signalCross();
        }else if((array[0]!=0&&array[0]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[8]!=0&&array[8]%2==0))
        {
            emit signalNull();
        }else
        if((array[2]%2!=0)&&(array[4]%2!=0)&&(array[6]%2!=0)) //2-4-6 cross
        {
            emit signalCross();
        }else if((array[2]!=0&&array[2]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[6]!=0&&array[6]%2==0))
        {
            emit signalNull();
        }else
        if((array[1]%2!=0)&&(array[4]%2!=0)&&(array[7]%2!=0)) //1-4-7 cross
        {
            emit signalCross();
        }else if((array[1]!=0&&array[1]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[7]!=0&&array[7]%2==0))
        {
            emit signalNull();
        }else
        if((array[3]%2!=0)&&(array[4]%2!=0)&&(array[5]%2!=0)) //3-4-5
        {
            emit signalCross();
        }else if((array[3]!=0&&array[3]!=0)&&(array[4]!=0&&array[4]%2==0)&&(array[5]!=0&&array[5]%2==0))
        {
            emit signalNull();
        }else
     //--------button 6-----------
     if((array[2]%2!=0)&&(array[5]%2!=0)&&(array[8]%2!=0)) //2-5-8 cross
     {
         emit signalCross();
     }else if((array[2]!=0&&array[2]%2==0)&&(array[5]!=0&&array[5]%2==0)&&(array[8]!=0&&array[8]%2==0))
     {
         emit signalNull();
     }
     if((array[3]%2!=0)&&(array[4]%2!=0)&&(array[5]%2!=0)) //3-4-5 cross
     {
         emit signalCross();
     }else if((array[3]!=0&&array[3]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[5]!=0&&array[5]%2==0))
     {
         emit signalNull();
     }else
         //----------button 7---------
         if((array[0]%2!=0)&&(array[3]%2!=0)&&(array[6]%2!=0)) //0-3-6 cross
         {
             emit signalCross();
         }else if((array[0]!=0&&array[0]%2==0)&&(array[3]!=0&&array[3]%2==0)&&(array[6]!=0&&array[6]%2==0))
         {
             emit signalNull();
         }else
         if((array[6]%2!=0)&&(array[7]%2!=0)&&(array[8]%2!=0))//6-7-8 cross
         {
             emit signalCross();
         }else if((array[6]!=0&&array[6]%2==0)&&(array[7]!=0&&array[7]%2==0)&&(array[8]!=0&&array[8]%2==0))
         {
             emit signalNull();
         }else
         if((array[2]%2!=0)&&(array[4]%2!=0)&&(array[6]%2!=0))//2-4-6 cross
         {
             emit signalCross();
         }else if((array[2]!=0&&array[2]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[6]!=0&&array[6]%2==0))
         {
             emit signalNull();
         }else

         //----------button 8---------
         if((array[1]%2!=0)&&(array[4]%2!=0)&&(array[7]%2!=0)) //1-4-7 cross
         {
             emit signalCross();
         }else if((array[1]!=0&&array[1]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[7]!=0&&array[7]%2==0))
         {
             emit signalNull();
         }else
         if((array[6]%2!=0)&&(array[7]%2!=0)&&(array[8]%2!=0)) //6-7-8 cross
         {
             emit signalCross();
         }else if((array[6]!=0&&array[6]%2==0)&&(array[7]!=0&&array[7]%2==0)&&(array[8]!=0&&array[8]%2==0))
         {
             emit signalNull();
         }else

         //---------Button 9---------
             if((array[0]%2!=0)&&(array[4]%2!=0)&&(array[8]%2!=0)) //0-4-8 cross
             {
                 emit signalCross();
             }else if((array[0]!=0&&array[0]%2==0)&&(array[4]!=0&&array[4]%2==0)&&(array[8]!=0&&array[8]%2==0))
             {
                 emit signalNull();
             }else
             if((array[2]%2!=0)&&(array[5]%2!=0)&&(array[8]%2!=0)) //2-5-8 cross
             {
                 emit signalCross();
             }else if((array[2]!=0&&array[2]%2==0)&&(array[5]!=0&&array[5]%2==0)&&(array[8]!=0&&array[8]%2==0))
             {
                 emit signalNull();
             }else
             if((array[6]%2!=0)&&(array[7]%2!=0)&&(array[8]%2!=0)) //6-7-8 cross
             {
                 emit signalCross();
             }else if((array[6]!=0&&array[6]%2==0)&&(array[7]!=0&&array[7]%2==0)&&(array[8]!=0&&array[8]%2==0))
             {
                 emit signalNull();
             }


} // ------gameLogik----------
