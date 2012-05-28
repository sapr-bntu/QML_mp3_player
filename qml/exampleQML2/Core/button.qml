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
    property color buttonColor: "lightblue"
    property color onHoverColor: "gold"
    property color borderColor: "black"

    gradient: Gradient {
        GradientStop { position: 0.0; color: "gray" }
        GradientStop { position: 0.5; color: "gray" }
        GradientStop { position: 0.5; color: "darkGray" }
    }

    Text {
        id: textItem
        anchors.centerIn: parent
        font.pointSize: 18
        color: "black"
    }
    MouseArea {
        id: mouseArea
        anchors.fill: parent
        onClicked: {
//            doOp(operation)
            button.clicked()}
            hoverEnabled: true
            onEntered: parent.border.color = onHoverColor
            onExited:  parent.border.color = borderColor
    }
//    Image {
//        id: image

//     }

}

