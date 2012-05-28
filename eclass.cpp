#include "eclass.h"
#include <QFileDialog>
#include <QTime>
#include <QProcess>
eclass::eclass(QObject *parent) :
    QObject(parent)
{
    audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory, this);
    mediaObject = new Phonon::MediaObject(this);
    metaInformationResolver = new Phonon::MediaObject(this);
}



QString eclass::play(QString str)
{
           Phonon::createPath(mediaObject, audioOutput);
           Phonon::MediaSource source(str);
           mediaObject->setCurrentSource(source);
           qDebug()<<"location  = "<<str;
mediaObject->play();
qint64 time=mediaObject->totalTime();
QTime displayTime(0, (time / 60000) % 60, (time / 1000) % 60);
return displayTime.toString("mm:ss");
}

void eclass::stop()
{
   mediaObject->stop();
}

void eclass::volume(qreal newVolume)
{
    audioOutput->setVolume(newVolume/100);
}

void eclass::seek(qint64 time)
{
mediaObject->seek(mediaObject->totalTime()*time/100);
time=mediaObject->currentTime();
}

QString eclass::time_curr()
{
 if(mediaObject->state()==2){
    qint64 time=mediaObject->currentTime();
    QTime displayTime(0, (time / 60000) % 60, (time / 1000) % 60);
    return displayTime.toString("mm:ss");}
 else return "00:00";
}
qreal eclass::seek_curr(qint64 seek_width)
{
 qreal curr=seek_width*mediaObject->currentTime()/mediaObject->totalTime();
 return curr;
}
int eclass::kol(int n)
{
n++;
return n;
}

//QString  eclass::insert()
//{

//  QString fileName;
// fileName= QFileDialog::getOpenFileName(NULL,tr("Open File..."), QString(), tr("All Files(*)"));
////    //QString fileName ="C:\\Users\\mag\\Desktop\\mp3_player_qml\\flo_rida_-_good_feeling.mp3";
////   // qDebug()<<fileName;
//return 0;
//}

QString eclass::title(QString filePath)
{
    QFile file(filePath);
    file.open(QIODevice::ReadOnly);
    qint64 size = file.size();
    file.seek(size-125);
    QByteArray titleB = file.read(30);
    QString title(titleB);
    QByteArray artistB = file.read(30);
    QString artist(artistB);
    qDebug()<<artist+" "+title;
    return artist+" "+title;
}
