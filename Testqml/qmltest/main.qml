import QtQuick 2.9
import QtQuick.Window 2.3
import QtQuick.Controls 2.5
import MyObj 1.0


Window {
    visible: true
    width: SCREEN_WIDTH
    property int value: myobj.iValue
    height: 480
    title: qsTr("Hello World")

    MyObject {
        id: myobj
        iValue: 10
        sString: "zhangsan"

//        Component.onCompleted: {
//            console.log(iValue,sString)
//        }

    }

    onValueChanged: {
        console.log(value);
    }

    Button {
        onClicked: {
            myobj.iValue = 20
        }
    }

}
