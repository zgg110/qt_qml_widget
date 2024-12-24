import QtQuick 2.9
import QtQuick.Window 2.2


import DelegateUI.Controls 1.0

Widget {
    id: root
    visible: true
    width: 640
    height: 480
    minimumWidth: 480
    minimumHeight: 320
    color: "#000"
    title: qsTr("Hello World")

    Rectangle {
        width: 100
        height: 100
        anchors.centerIn: parent
        color: "red"

        MouseArea {
            anchors.fill: parent
            hoverEnabled: true
            onEntered: {
                cursorShape = Qt.PointingHandCursor;
                parent.color = "blue";
            }
            onExited: {
                cursorShape = Qt.ArrowCursor;
                parent.color = "red";
            }
            onPressed: parent.color = "yellow";
            onReleased: parent.color = "blue";
        }
    }
}
