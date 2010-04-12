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

#line 37 "sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 39 "sipQtCoreQReadWriteLock.cpp"



extern "C" {static PyObject *meth_QReadWriteLock_lockForRead(PyObject *, PyObject *);}
static PyObject *meth_QReadWriteLock_lockForRead(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QReadWriteLock,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->lockForRead();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QReadWriteLock,sipName_lockForRead);

    return NULL;
}


extern "C" {static PyObject *meth_QReadWriteLock_tryLockForRead(PyObject *, PyObject *);}
static PyObject *meth_QReadWriteLock_tryLockForRead(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QReadWriteLock,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLockForRead();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QReadWriteLock,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLockForRead(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QReadWriteLock,sipName_tryLockForRead);

    return NULL;
}


extern "C" {static PyObject *meth_QReadWriteLock_lockForWrite(PyObject *, PyObject *);}
static PyObject *meth_QReadWriteLock_lockForWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QReadWriteLock,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->lockForWrite();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QReadWriteLock,sipName_lockForWrite);

    return NULL;
}


extern "C" {static PyObject *meth_QReadWriteLock_tryLockForWrite(PyObject *, PyObject *);}
static PyObject *meth_QReadWriteLock_tryLockForWrite(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QReadWriteLock,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLockForWrite();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QReadWriteLock,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->tryLockForWrite(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QReadWriteLock,sipName_tryLockForWrite);

    return NULL;
}


extern "C" {static PyObject *meth_QReadWriteLock_unlock(PyObject *, PyObject *);}
static PyObject *meth_QReadWriteLock_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QReadWriteLock *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QReadWriteLock,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unlock();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QReadWriteLock,sipName_unlock);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QReadWriteLock(void *, const sipTypeDef *);}
static void *cast_QReadWriteLock(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QReadWriteLock)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QReadWriteLock(void *, int);}
static void release_QReadWriteLock(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QReadWriteLock *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QReadWriteLock(sipSimpleWrapper *);}
static void dealloc_QReadWriteLock(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QReadWriteLock(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QReadWriteLock(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QReadWriteLock(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QReadWriteLock *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QReadWriteLock();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        QReadWriteLock::RecursionMode a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"E",sipType_QReadWriteLock_RecursionMode,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QReadWriteLock(a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


static PyMethodDef methods_QReadWriteLock[] = {
    {SIP_MLNAME_CAST(sipName_lockForRead), meth_QReadWriteLock_lockForRead, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lockForWrite), meth_QReadWriteLock_lockForWrite, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tryLockForRead), meth_QReadWriteLock_tryLockForRead, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_tryLockForWrite), meth_QReadWriteLock_tryLockForWrite, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QReadWriteLock_unlock, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QReadWriteLock[] = {
    {sipName_NonRecursive, QReadWriteLock::NonRecursive, 126},
    {sipName_Recursive, QReadWriteLock::Recursive, 126},
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QReadWriteLock = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QReadWriteLock,
        {0}
    },
    {
        sipNameNr_QReadWriteLock,
        {0, 0, 1},
        5, methods_QReadWriteLock,
        2, enummembers_QReadWriteLock,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QReadWriteLock,
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
    dealloc_QReadWriteLock,
    0,
    0,
    0,
    release_QReadWriteLock,
    cast_QReadWriteLock,
    0,
    0,
    0
},
    0,
    0,
    0
};
