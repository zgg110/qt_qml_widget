#include "widget.h"

#include <QApplication>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);

    qmlRegisterType<Widget>("DelegateUI.Controls", 1, 0, "Widget");

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine,&QQmlApplicationEngine::objectCreated,
                     &a,[url](QObject *obj, const QUrl &objUrl){
        if (!obj && url == objUrl)
                    QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return a.exec();
}
