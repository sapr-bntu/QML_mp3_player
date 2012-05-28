//import QtQuick 1.0
import Qt 4.7
Rectangle {
    id:button
    property alias text: textItem.text

    signal clicked

    width: 150; height: 30
    border.width: 1
    radius: 5
    smooth: true



    Text {
        id: textItem
        anchors.centerIn: parent
        font.pointSize: 10
        color: "white"
    }
    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: {
//            doOp(operation)
            button.clicked()
    }
    }
}

