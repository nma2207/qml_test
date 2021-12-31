import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import view

ApplicationWindow {
    id: app
    width: 640
    height: 480
    visible: true
    title: qsTr("Qml Test")

    background: Rectangle {
         color: "#8598DC"

    }

//    SpinBox
//    {
//        id: sb
//        value: 50
//        anchors.centerIn: parent
//    }

    Rectangle
    {
        id: _layout
        Button {
            id: _decButton
            text: "-"
            onClicked:b_view.dec()
            font.pixelSize: _label.font.pixelSize * 2
            anchors.verticalCenter: _label.verticalCenter
            anchors.right: _label.left
            width: 40
            height: 40

            background: Rectangle {
                color: parent.color
                opacity: 0
            }
            anchors.rightMargin: -5
        }
        Label {
            id: _label
            text: _view.number
            font.pixelSize: 16
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            width: 40
            height: 40
            anchors.centerIn: parent
        }
        Button {
            text: "+"
            onClicked: _view.inc()
            font.pixelSize: _label.font.pixelSize * 2
            anchors.verticalCenter: _label.verticalCenter
            anchors.left: _label.right
            background: Rectangle {
                color: parent.color
                opacity: 0
                //radius: 5
            }
            anchors.leftMargin: -5
            width: 40
            height: 40
        }

        color: "#CDD3F3"
        radius: 5
        anchors.centerIn: parent
        width : _decButton.width * 3
        height: _decButton.height
    }

    Label
    {
        text: qsTr("Tap \"-\" to decrement")
        anchors.bottom: _layout.top
        anchors.horizontalCenter: parent.horizontalCenter

        color: "white"
    }
    Label
    {
        text: qsTr("Tap \"+\" to increment")
        anchors.top: _layout.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        color: "white"
    }
    View
    {
        id: _view
        number: sb.value
    }

    Button {
        text: qsTr("Set random number")
        anchors.top : parent.top
        anchors.horizontalCenter: _layout.horizontalCenter
        onClicked:_view.setRandomNumber()

    }
}
