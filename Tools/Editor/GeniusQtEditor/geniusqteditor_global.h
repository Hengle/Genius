#ifndef GENIUSQTEDITOR_GLOBAL_H
#define GENIUSQTEDITOR_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef GENIUSQTEDITOR_LIB
# define GENIUSQTEDITOR_EXPORT Q_DECL_EXPORT
#else
# define GENIUSQTEDITOR_EXPORT Q_DECL_IMPORT
#endif

#endif // GENIUSQTEDITOR_GLOBAL_H