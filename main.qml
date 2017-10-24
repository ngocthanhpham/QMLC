import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.3

import demo.mymessage 1.0
import demo.myauthor 1.0
import demo.mymessageboard 1.0
import demo.mybody 1.0

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    property alias btn: btn
    title: qsTr("Hello World")
    //    Rectangle{

    //        Message{
    //            id: idMessage
    //            mBody: MessageBody{
    //                mContent: "Hello"
    //            }
    //            mAuthor: MessageAuthor{
    //                mName: "A"
    //                mEmail: "test@gmail"
    //            }
    //        }


    //        Row{
    //            spacing: 5
    //            Text {
    //                id: txt
    //                text: idMessage.mBody.mContent
    //            }
    //            Text {
    //                id: txt1
    //                text: idMessage.mAuthor.mEmail
    //            }
    //            Text {
    //                id: txt2
    //                text: idMessage.mAuthor.mName
    //            }
    //        }
    //    }

    MessageBoard{
        id: msgBoard
        mListMsg:[
            Message{
                mBody: MessageBody{
                    mContent: "Hello"
                }
                mAuthor: MessageAuthor{
                    mName: "A"
                    mEmail: "test@gmail"
                }
            },
            Message{
                mBody: MessageBody{
                    mContent: "Hello"
                }
                mAuthor: MessageAuthor{
                    mName: "A"
                    mEmail: "test@gmail"
                }
            }
        ]
    }

    Item{
        height: 500
        width: 500
        Rectangle{
            height: 300
            width: 300
            id:rec1
            ListView{
                model: msgBoard.mListMsg
                anchors.fill: parent
                delegate:
                    Row{
                    spacing: 10
                    Text {
                        id: txt5
                        text: modelData.mBody.mContent
                    }
                    Text {
                        id: txt6
                        text: modelData.mAuthor.mName
                    }
                    Text {
                        id: txt7
                        text: modelData.mAuthor.mEmail
                    }
                }
            }
        }


        Button{
            id:btn
            text: "ClickMe"
            anchors.top: rec1.bottom
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    console.log(mouseX)
                    msgBoard.insertElement()
                }
            }
        }
    }


}
