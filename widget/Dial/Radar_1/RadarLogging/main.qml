import QtQuick 2.9
import QtQuick.Controls 2.2

ApplicationWindow{
    id: root
    width: 550
    height: 850
    visible: true
    minimumWidth: 100
    minimumHeight: 100
    SwipeView {
        id: stackLayout
        width: root.width
        height: root.height
        clip: true
        interactive: false
        focus: true
        currentIndex: 0
        Rectangle {
            id: book_window
            width: root.width
            height: root.height
            color: "#2f2f2f"
            radius: 30
            border.width: 0
            clip: true
            z: -2}
    }
}

//ApplicationWindow {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Tabs")
//    color: "white"


//    Canvas {
//        width: parent.width
//        height: parent.height

//        onPaint: {
//            var ctx = getContext("2d");
//            ctx.reset();

//            // 设置圆环的中心点和半径
//            var centerX = parent.width / 2;
//            var centerY = parent.height / 2;
//            var outerRadius = 100;
//            var innerRadius = 98;

//            ctx.lineWidth = 5
//            ctx.strokeStyle = Qt.rgba(233, 0, 0, 10);


//            // 开始绘制圆环路径
//            ctx.beginPath();
//            ctx.arc(centerX, centerY, outerRadius, 0, Math.PI * 2, false);
//            ctx.stroke(); // 设置大圆圈颜色

//            ctx.lineWidth = 5
//            ctx.strokeStyle = Qt.rgba(233, 0, 0, 10);
//            ctx.beginPath();
//            ctx.arc(centerX, centerY, outerRadius-30, 0, Math.PI * 2, false);
////            ctx.clip()
////            ctx.save()
////            ctx.arc(centerX, centerY, innerRadius, Math.PI * 2, 0, true);


//            // 关闭路径形成圆环
//            ctx.closePath();

//            // 设置填充样式
//            ctx.fillStyle = "red";
//            ctx.stroke(); // 设置大圆圈颜色
//        }
//    }

////    Column {
////        CheckBox {
////            checked:true       //确认使能勾选
////            tristate: true     //三种状态选择启用
////            text: qsTr("First")
////        }
////        CheckBox {
////            checked:true
////            text: qsTr("Second")
////        }
////        CheckBox {
////            checked:true
////            text: qsTr("Third")
////        }
////    }


////    Rectangle {
////        id: rect
////        width: 100
////        height: 100
////        color: "red"

////        PropertyAnimation on x {
////            to:100
////            duration: 1000
////        }
////        PropertyAnimation on y {
////            to:100
////            duration: 1000
////        }
////        PropertyAnimation on width {
////            to:300
////            duration: 1000
////        }

////    }

////    Rectangle {
////        id: root
////        width: 100
////        height: 100
////        state: "normal"
////        states: [
////            State {
////                name: "normal"
////                PropertyChanges {
////                    target: root
////                    color: "black"
////                }
////            },
////            State {
////                name: "red_color"
////                PropertyChanges {
////                    target: root
////                    color: "red"
////                }
////            },
////            State {
////                name: "blue_color"
////                PropertyChanges {
////                    target: root
////                    color: "blue"
////                }
////            }
////        ]
////    }

////    MouseArea {
////        id: mouseArea
////        width: 200
////        height: 200
////        acceptedButtons: Qt.LeftButton | Qt.RightButton
////        anchors.fill: parent
//////        onClicked: {

//////            console.log("clicked");
//////        }
////        onPressed: {
//////            var ret = pressedButtons & Qt.LeftButton
//////            console.log(ret);
////            root.state = "red_color"
////        }
////        onReleased: {
//////            console.log("released");
////            root.state = "blue_color"
////        }

////    }

//}
