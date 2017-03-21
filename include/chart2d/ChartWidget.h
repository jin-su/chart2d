#ifndef CHARTWIDGET_H
#define CHARTWIDGET_H

#include "chart2d_global.h"
#include <qwt_plot.h>

namespace pst {

namespace chart2d {

class CHART2DSHARED_EXPORT ChartWidget : public QwtPlot
{
    Q_OBJECT
public:
    ChartWidget(QWidget* parent = 0);
};

}
}

#endif // CHARTWIDGET_H
