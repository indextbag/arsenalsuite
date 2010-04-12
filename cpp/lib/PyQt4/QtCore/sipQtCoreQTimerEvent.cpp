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

#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "sipQtCoreQTimerEvent.cpp"

#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 43 "sipQtCoreQTimerEvent.cpp"


class sipQTimerEvent : public QTimerEvent
{
public:
    sipQTimerEvent(int);
    sipQTimerEvent(const QTimerEvent&);
    ~sipQTimerEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTimerEvent(const sipQTimerEvent &);
    sipQTimerEvent &operator = (const sipQTimerEvent &);
};

sipQTimerEvent::sipQTimerEvent(int a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::sipQTimerEvent(const QTimerEvent& a0): QTimerEvent(a0), sipPySelf(0)
{
}

sipQTimerEvent::~sipQTimerEvent()
{
    sipCommonDtor(sipPySelf);
}


extern "C" {static PyObject *meth_QTimerEvent_timerId(PyObject *, PyObject *);}
static PyObject *meth_QTimerEvent_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QTimerEvent *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QTimerEvent,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timerId();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QTimerEvent,sipName_timerId);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTimerEvent(void *, const sipTypeDef *);}
static void *cast_QTimerEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTimerEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QTimerEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTimerEvent(void *, int);}
static void release_QTimerEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTimerEvent *>(sipCppV);
    else
        delete reinterpret_cast<QTimerEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTimerEvent(sipSimpleWrapper *);}
static void dealloc_QTimerEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTimerEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTimerEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTimerEvent(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QTimerEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQTimerEvent *sipCpp = 0;

    if (!sipCpp)
    {
        int a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i",&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimerEvent(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QTimerEvent * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTimerEvent(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTimerEvent[] = {{46, 255, 1}};


static PyMethodDef methods_QTimerEvent[] = {
    {SIP_MLNAME_CAST(sipName_timerId), meth_QTimerEvent_timerId, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QTimerEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTimerEvent,
        {0}
    },
    {
        sipNameNr_QTimerEvent,
        {0, 0, 1},
        1, methods_QTimerEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QTimerEvent,
    0,
    init_QTimerEvent,
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
    dealloc_QTimerEvent,
    0,
    0,
    0,
    release_QTimerEvent,
    cast_QTimerEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
