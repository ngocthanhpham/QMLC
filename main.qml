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
    title: qsTr("Hello World")
    Rectangle{

        Message{
            id: idMessage
            mBody: MessageBody{
                mContent: "Hello"
            }
            mAuthor: MessageAuthor{
                mName: "A"
                mEmail: "test@gmail"
            }
        }


        Row{
            spacing: 5
            Text {
                id: txt
                text: idMessage.mBody.mContent
            }
            Text {
                id: txt1
                text: idMessage.mAuthor.mEmail
            }
            Text {
                id: txt2
                text: idMessage.mAuthor.mName
            }
        }
    }

}
