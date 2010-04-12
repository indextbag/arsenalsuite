/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:19 2010
 *
 * Copyright (c) 2009 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 41 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 76 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 41 "sipQtCoreQTextCodecConverterState.cpp"

#line 41 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 45 "sipQtCoreQTextCodecConverterState.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextCodec_ConverterState(void *, const sipTypeDef *);}
static void *cast_QTextCodec_ConverterState(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextCodec_ConverterState)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextCodec_ConverterState(void *, int);}
static void release_QTextCodec_ConverterState(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextCodec::ConverterState *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextCodec_ConverterState(sipSimpleWrapper *);}
static void dealloc_QTextCodec_ConverterState(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextCodec_ConverterState(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextCodec_ConverterState(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QTextCodec_ConverterState(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QTextCodec::ConverterState *sipCpp = 0;

    if (!sipCpp)
    {
        QTextCodec::ConversionFlags a0def = QTextCodec::DefaultConversion;
        QTextCodec::ConversionFlags * a0 = &a0def;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|J1",sipType_QTextCodec_ConversionFlags,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextCodec::ConverterState(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(a0,sipType_QTextCodec_ConversionFlags,a0State);
        }
    }

    return sipCpp;
}


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextCodec_ConverterState = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextCodec__ConverterState,
        {0}
    },
    {
        sipNameNr_ConverterState,
        {168, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QTextCodec_ConverterState,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QTextCodec_ConverterState,
    0,
    0,
    0,
    release_QTextCodec_ConverterState,
    cast_QTextCodec_ConverterState,
    0,
    0,
    0
},
    0,
    0,
    0
};
