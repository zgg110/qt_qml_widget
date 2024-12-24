import QtQuick 2.9
import QtQuick.Controls 2.2

Rectangle {
    width: 200
    height: 100
    color: "black"

    /* 私有化属性 */
    QtObject {
        id: attributes
        property int testValue: 90
    }

    Component.onCompleted: {
        console.log(attributes.testValue)
    }
}

