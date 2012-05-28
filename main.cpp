#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"
#include "eclass.h"
#include <QDirModel>
#include <QtDeclarative/QDeclarativeContext>

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));
 //qmlRegisterType<eclass>("mp3", 1, 0, "eclass");
    QDirModel model;
   // model.setFilter();
    QmlApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("dirModel", &model);
    viewer.rootContext()->setContextProperty("eclass",new eclass);
    viewer.setOrientation(QmlApplicationViewer::ScreenOrientationAuto);
    viewer.setMainQmlFile(QLatin1String("qml/exampleQML2/main.qml"));
    viewer.showExpanded();
    return app->exec();

}
