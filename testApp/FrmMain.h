#ifndef FRMMAIN_H
#define FRMMAIN_H

#include <QMainWindow>
#include "ChartWidget.h"

typedef pst::chart2d::ChartWidget   Chart;

class FrmMain : public QMainWindow
{
    Q_OBJECT

public:
    FrmMain(QWidget *parent = 0);
    ~FrmMain();

private:
    Chart*  _chart;
};

#endif // FRMMAIN_H
