#ifndef FILEPREVIEW_GLOBAL_H
#define FILEPREVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(FILEPREVIEW_LIBRARY)
#  define FILEPREVIEWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define FILEPREVIEWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // FILEPREVIEW_GLOBAL_H
