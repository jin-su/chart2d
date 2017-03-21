#ifndef CHART2D_GLOBAL_H
#define CHART2D_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CHART2D_LIBRARY)
#  define CHART2DSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CHART2DSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CHART2D_GLOBAL_H
