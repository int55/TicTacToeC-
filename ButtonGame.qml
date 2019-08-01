import QtQuick 2.9
import QtQuick.Window 2.2
import module 1.0

Grid{
    anchors.centerIn: parent
    columns: 3 ; spacing: 17
    Rectangle{ //----------------
        height: 50 ; width: 50
        Image {
            id: myImg1
            anchors.fill: parent
            anchors.centerIn: parent
            source: (temp1%2 == 0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            id: kk
            anchors.fill: parent
            onClicked: {
                myImg1.visible =true
                count++
                temp1=count
                indexArray=0
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle--1-------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg2
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp2%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            id: ll111
            anchors.fill: parent
            onClicked: {
                myImg2.visible =true
                count++
                temp2=count
                indexArray=1
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-2--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg3
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp3%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg3.visible =true
                count++
                temp3 = count
                indexArray=2
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-3--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg4
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp4%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg4.visible =true
                count++
                temp4 = count
                indexArray=3
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-4--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg5
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp5%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg5.visible =true
                count++
                temp5 = count
                indexArray=4
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-5--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg6
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp6%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg6.visible =true
                count++
                temp6=count
                indexArray=5
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-6--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg7
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp7%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg7.visible =true
                count++
                temp7 = count
                indexArray=6
                gameLog.setCounter(count, indexArray)
                console.log(indexArray)
                enabled = false
            }
        }
    } //------Rectangle-7--------
    Rectangle{
        height: 50 ; width: 50
        Image {
            id: myImg8
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp8%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg8.visible =true
                count++
                temp8=count
                indexArray=7
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-8--------
    Rectangle{
        id: rect9
        height: 50 ; width: 50
        Image {
            id: myImg9
            height: 50 ; width: 50
            anchors.centerIn: parent
            source: (temp9%2==0)? "null.jpg": "cross.jpg"
            visible: false
        }
        MouseArea{
            anchors.fill: parent
            onClicked: {
                myImg9.visible =true
                count++
                temp9=count
                indexArray=8
                gameLog.setCounter(count, indexArray)
                enabled = false
            }
        }
    } //------Rectangle-9--------
}
