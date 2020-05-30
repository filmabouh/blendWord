import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.5

Window {
    visible: true
    width: 640
    height: 480

    color: "blue"

    Column{

        anchors.fill: parent
        anchors.margins: parent.height * 0.1
        spacing: parent.height * 0.1


        TextField{
            id: inputWord
            anchors.horizontalCenter: parent.horizontalCenter

        }

        Button{
            anchors.horizontalCenter: parent.horizontalCenter

            text: "Validate"

            onClicked: {
                superManager.blendInputWord(inputWord.text)

            }

        }

        Text
        {
            id : blendWord
            anchors.horizontalCenter: parent.horizontalCenter

            text : superManager.sBlendWord

        }



    }


}
