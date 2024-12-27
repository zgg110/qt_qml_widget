import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.5
import MyObj 1.0


Window {
    id: window
    visible: true
    width: SCREEN_WIDTH
//    property int value: myobj.iValue
    height: 480
    objectName: "window"
    title: qsTr("Hello World")

    signal qmlSig(int i,string s)   //定义qml中的信号用以触发Cpp中的槽函数使用

    MyObject {
        id: myobj
        iValue: 10
        sString: "zhangsan"

//        Component.onCompleted: {
//            console.log(iValue,sString)
//        }

    }

//    onValueChanged: {
//        console.log(value);
//    }

    Button {
        objectName: "mybutton"
        onClicked: {
//            myobj.iValue = 20
//            myobj.func();
            qmlSig(10,"zhangsan")
        }
    }

    //连接信号与槽相关(使用的前提做好object的相关定义)
//    Connections {
//        target: window                   //指向目标
//        onQmlSig: myobj.cppSlot(i,s)     //触发的信号所对应的槽函数

//    }

//    Component.onCompleted: {
//        qmlSig.connect(myobj.cppSlot)
//    }

}
