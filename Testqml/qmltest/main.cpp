#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QScreen>
#include <QObject>
#include "myobject.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    /* 注册qml绘制框体 */

    QQmlApplicationEngine engine;

    //全局对象(上下文对象)
    QQmlContext* context = engine.rootContext();
//    //定义qml可以直接使用的定义值属性
//    QScreen *screen = QGuiApplication::primaryScreen();  //获取屏幕整体像素
//    QRect rect = screen->virtualGeometry();              //获取屏幕像素
    context->setContextProperty("SCREEN_WIDTH",800);  //将SCREEN_WIDTH进行属性定义，可以在qml文件中直接进行调用
    qmlRegisterType<MyObject>("MyObj",1,0,"MyObject");
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    //engine 加载完成后 load以后
    auto list = engine.rootObjects();
//    auto buttonObj = list.first()->findChild<QObject *>("mybutton");
    auto window = list.first();
    qDebug() << window;

    QObject::connect(window,SIGNAL,(qmlSig)

    return app.exec();
}
