#ifndef SLIDER_H
#define SLIDER_H

#include <QGroupBox>

 class QDial;
 class QScrollBar;
 class QSlider;

 class Slider : public QGroupBox
 {
     Q_OBJECT

 public:
     Slider(Qt::Orientation orientation, const QString &title,
                  QWidget *parent = 0);

 signals:
     void valueChanged(int value);

 public slots:
     void setValue(int value);
     void setMinimum(int value);
     void setMaximum(int value);
     void invertAppearance(bool invert);
     void invertKeyBindings(bool invert);

 private:
     QSlider *slider;
     QScrollBar *scrollBar;
     QDial *dial;
 };


#endif // SLIDER_H
