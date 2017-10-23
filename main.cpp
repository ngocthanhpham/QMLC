#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "message.h"
#include "messageauthor.h"
#include "messageboard.h"
#include "messagebody.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;


    qmlRegisterType<Message>("demo.mymessage",1,0,"Message");
    qmlRegisterType<MessageAuthor>("demo.myauthor",1,0,"MessageAuthor");
    qmlRegisterType<MessageBoard>("demo.mymessageboard",1,0,"MessageBoard");
    qmlRegisterType<MessageBody>("demo.mybody",1,0,"MessageBody");
    return app.exec();
}
