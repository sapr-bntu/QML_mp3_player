import "Core"
import Qt 4.7
//надо добавить  import QtMultimediaKit 1.1


Rectangle {
    width: 860
    height:250

gradient: Gradient {
        GradientStop { position: 0.0; color: "darkgray" }
        GradientStop { position: 0.5; color: "gray" }
        GradientStop { position: 1.0; color: "lightgray" }
    }
Item {
    Timer {
        interval: 500; running: true; repeat: true
        onTriggered:
        {
            stroka.width=eclass.seek_curr(seek.width)
            textItemSeek.text=eclass.time_curr()
        if (seek.width==stroka.width) buttonNext.clicked()
        }
    }

    // Text { id: time }
 }
     Rectangle {
         Image {
             width: 400; height: 120
             x: 0
             y: 0
                           id: name1
                           source: "Core\\gom_player.gif"
                        }
         Image {

             x: 580
             y:5
                           id: name2
                           source: "Core\\123.jpg"
                        }
         Image {

             x: 625
             y:185
                           id: name3
                           source: "Core\\dinam.jpg"
                        }
          width: 400; height: 120
          x: 10
          y: 10
          gradient: Gradient {
                  GradientStop { position: 0.0; color: "lightgray" }
                  GradientStop { position: 0.5; color: "gray" }
                  GradientStop { position: 1.0; color: "darkgray" }
              }
          Component {
             id: contactDelegate
                     Item
                        { width: 400; height:30
                            Text {
                                id: textItem
                                anchors.centerIn: parent
                                font.pointSize: 20
                                text: number+'. ' + name
                            }
                         MouseArea {
                             id: mouseArea
                             anchors.fill: parent
                             onClicked: {
                                 console.log(name + " clicked" )
                                 view.currentIndex=number-1
                             }
                         }
                     }                  
         }
          Rectangle {
              id:svet
              visible: false;

              width: 250
              height: 90
               x: 580
               y: 5
               gradient: Gradient {
                       GradientStop { position: 0.0; color: "lightgray" }
                       GradientStop { position: 0.5; color: "gray" }
                       GradientStop { position: 1.0; color: "darkgray" }
                   }
          ListView {
              id: view1
              width: 250
              height: 93

              highlight: Rectangle { color: "lightsteelblue"; radius: 5 }
              focus: true
              model: VisualDataModel {
                  model: dirModel

                  delegate: Rectangle {
                      width: 250; height: 30
                      gradient: Gradient {
                              GradientStop { position: 0.0; color: "lightgray" }
                              GradientStop { position: 0.5; color: "gray" }
                              GradientStop { position: 1.0; color: "darkgray" }
                          }
                      Text { text: fileName }

                      MouseArea {
                          anchors.fill: parent
                          onClicked: {
                              if (model.hasModelChildren)
                               view1.model.rootIndex = view1.model.modelIndex(index)

                              else
                              {
                                  console.log(filePath);
                                  view.model.append({"number": eclass.kol(view.model.count), "name":eclass.title(filePath),"location":filePath})

                              }
                          }
                      }
                  }
              }
          }
          }
         ListView {
             id: view
             anchors.fill: parent
             model: ContactModel {}
             delegate: contactDelegate
             highlight: Rectangle { color: "lightsteelblue"; radius: 5 }

         }
     }

              Button {
                  id: buttonInsert

                  x: 420
                  y: 10
                  text: "Insert"
                  onClicked:  {
                      svet.visible=true
console.log(buttonInsert.text + " clicked" )
                      //view.model.append(eclass.insert());
                      //view.model.append({"number": eclass.kol(view.model.count), "name":eclass.title(eclass.insert()),"location":eclass.insert()})
                  }
              }
              Button {
                  id: buttonDelete
                  Image {
                     id: name6
                     source: "Core\\delete.png"
                     y:10
                  }
                  x: 420
                  y: 50
                  text: "Delete"

                  onClicked:  {
console.log(buttonDelete.text + " clicked" )
                      view.model.remove(view.currentIndex)
                  }
              }

  //=========================================================================================
//              Button {
//              id:piuOpen
//              x:420
//              y:90
//              text: "Up"


//              onClicked: {  }


//              }


//              Rectangle {
//                  id:rectPiu
//                  width: 200
//                  height: 100
//                  border.color: "black"
//                  color: "lightgray"
//                  radius: 6
//                  x:580
//                  y:45

//              /// ne vidit elementa audio bez plugina   QtMultimediaKit 1.1
////                  Audio {
////                      // Элемент Audio
////                          id: playMusic
////                          source: "music.mp3"
////                          // Имя и Расположение аудио-файла
////                      }
//                      MouseArea {
//                          id: playArea
//                          anchors.fill: parent
//                          onPressed: { playMusic.play() }
//                          // при щелчке на форме начинаем воспроизведение файла
//                      }


//              }
//============================================================================================
    Row
    {
        y: 150
        spacing: 25
        Button {
            id: buttonPrev
            text: "Prev"
            Image {
               id: name22
               source: "Core\\prev.png"
            }
            onClicked:  {
                console.log(buttonPrev.text + " clicked" )
                eclass.stop();
                stroka.width=0;
                view.currentIndex--;
                textItemSeek2.text=eclass.play(view.model.get(view.currentIndex).location);
            }
        }
        Button {
            id: buttonRun
            text: "Play"
            Image {
               id: name
               source: "Core\\play.png"
            }
            onClicked:  {
                console.log(buttonRun.text + " clicked" )
                console.log(view.model.get(view.currentIndex).location);
                stroka.width=0;
                textItemSeek2.text=eclass.play(view.model.get(view.currentIndex).location);
            }
        }
        Button {
            id: buttonNext
            text: "Next"
            Image {
               id: name11
               source: "Core\\next.png"
            }
            onClicked:  {
                console.log(buttonNext.text + " clicked" )
                eclass.stop();
                stroka.width=0;
                view.currentIndex++;
                textItemSeek2.text=eclass.play(view.model.get(view.currentIndex).location);
            }
        }

        Button {
            id: buttonStop
            text: "Stop"

            Image {
               id: name33
               source: "Core\\stop.png"
            }
            onClicked:  {
                console.log(buttonStop.text + " clicked" )
                eclass.stop();
                stroka.width=0;
            }
        }
        Button {
            id: buttonQuit
            text: "Quit"

            Image {
               id: name4
               source: "Core\\quit.png"
               y:8
            }
            onClicked:  {
                Qt.quit()
            }
        }
   }
  Rectangle {
      x: 20
      y: 200
      width: 600
      height: 20
      id: seek
      objectName: "seek"
      gradient: Gradient {
              GradientStop { position: 0.0; color: "black" }
              GradientStop { position: 0.5; color: "white" }
              GradientStop { position: 1.0; color: "lightblue" }
          }
      MouseArea {
          id: mouseArea
          anchors.fill: parent
          onClicked: {
             eclass.seek(mouseX/seek.width*100)
             stroka.width=mouseX
         }
      }
      Text {
          x: 0
          y: 20
          id: textItemSeek
          text: "00:00"
          font.pointSize: 18
          color: "black"
      }
      Text {
          x: 530
          y: 20
          id: textItemSeek2
          text: "00:00"
          font.pointSize: 18
          color: "black"
      }
  }
  Rectangle {
      id:stroka
      objectName: "stroka"
      x: 20
      y: 200
      width: 0 //--------------
      height: 20
      gradient: Gradient {
          GradientStop { position: 0.1; color: "black" }
          GradientStop { position: 0.5; color: "darkgrey" }
          GradientStop { position: 0.9; color: "black" }
           }
  }
  Rectangle {
      x: 700
      y: 200
      id:seek2
      width: 101
      height: 20
      gradient: Gradient {
          GradientStop { position: 0.0; color: "black" }
          GradientStop { position: 0.5; color: "white" }
          GradientStop { position: 1.0; color: "black" }
           }
      MouseArea {
          id: mouseAreaVolume
          anchors.fill: parent
          onClicked: {
              volume.width=mouseX
              eclass.volume(mouseX/seek2.width*100)
          }}      
      }
  Rectangle {
      id:volume
      objectName: "volume"
      x: 700
      y: 200
      width: 100
      height: 20
      gradient: Gradient {
          GradientStop { position: 0.1; color: "black" }
          GradientStop { position: 0.5; color: "darkgrey" }
          GradientStop { position: 0.9; color: "black" }
           }
      Text {
          x: 0
          y: 20
          id: textItemVolume
          text: "Volume: "+volume.width
          font.pointSize: 18
          color: "black"
      }
  }

}
