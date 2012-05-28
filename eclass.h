#ifndef ECLASS_H
#define ECLASS_H
#include <phonon>
#include <QObject>
#include <phonon/audiooutput.h>
 #include <phonon/seekslider.h>
 #include <phonon/mediaobject.h>
 #include <phonon/volumeslider.h>
 #include <phonon/backendcapabilities.h>

class QLCDNumber;
class eclass : public QObject
{
    Q_OBJECT
public:
    explicit eclass(QObject *parent = 0);
    Phonon::MediaObject *mediaObject;
    Phonon::MediaObject *metaInformationResolver;
    Phonon::AudioOutput *audioOutput;
    Phonon::VolumeSlider *volumeSlider;
    Phonon::SeekSlider *seekSlider;

    int curentIndex;
    int N;

QList<Phonon::MediaSource> sources;
   // Q_INVOKABLE QString hello();
signals:
void mytick(qint64 time);
public slots:
    //QString hello2();
    QString play(QString str);
    void stop();
    void volume(qreal newVolume);
    void seek(qint64 time);
    qreal seek_curr(qint64 seek_width);
    QString time_curr();
    int kol(int n);
   //QString insert();
    QString title(QString filename);
public slots:
    
};

#endif // ECLASS_H
