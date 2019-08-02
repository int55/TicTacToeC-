import QtQuick 2.9
import QtQuick.Window 2.2
import module 1.0

Window {
    visible: true
    width: 200
    height: 227
    title: qsTr("Tic Tac Toe")

    property int count: 0
    property int indexArray: 0
    property int temp1: 0
    property int temp2: 0
    property int temp3: 0
    property int temp4: 0
    property int temp5: 0
    property int temp6: 0
    property int temp7: 0
    property int temp8: 0
    property int temp9: 0

    property bool isWin: true
    GameLogik{
        id: gameLog
    }//-----------c++--------

    Connections{
        target: gameLog
        onSignalCross: {
            imgFirstWin.visible=true
            isWin=true
        }
    }//------signalCross-----

    Connections{
        target: gameLog
        onSignalNull: {
            //imgSecondWin.visible=true
            imgFirstWin.visible=true
            isWin=false

        }
    }//------signalNull------

    Rectangle{
        anchors.fill: parent

        Image {
            id: tabl1
            source: "tabl1.jpg"
            width: 200 ; height: 200

            ButtonGame {
            }
        }// -----Image-----------

        Image {
            id: imgFirstWin
            height: 25 ; width: parent.width/2
            anchors.top: tabl1.bottom
            anchors.horizontalCenter: parent.horizontalCenter
            source: (isWin == true)? "firstW.jpg": "secondW.jpg"
            visible: false
        }//---------FirstWin-------


    }//-----Rectangle--------
} // -------Window-----------



