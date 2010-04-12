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

#line 41 "sip/QtCore/qbitarray.sip"
#include <qbitarray.h>
#line 39 "sipQtCoreQBitArray.cpp"

#line 45 "sip/QtCore/qbitarray.sip"
// This is needed by __hash__().
#include <qhash.h>
#line 44 "sipQtCoreQBitArray.cpp"


extern "C" {static PyObject *meth_QBitArray_size(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_size(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_size);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_count(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_count(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        bool a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count(a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_count);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_isNull(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_isNull);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_resize(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->resize(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_resize);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_detach(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->detach();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_detach);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_isDetached(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_isDetached(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isDetached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_isDetached);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_clear(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QBitArray,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_clear);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_fill(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_fill(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        bool a0;
        int a1;
        int a2;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bbii",&sipSelf,sipType_QBitArray,&sipCpp,&a0,&a1,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->fill(a0,a1,a2);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        bool a0;
        int a1 = -1;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bb|i",&sipSelf,sipType_QBitArray,&sipCpp,&a0,&a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fill(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_fill);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_truncate(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_truncate(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->truncate(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_truncate);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_testBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_testBit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->testBit(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_testBit);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_setBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_setBit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        bool a1;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bib",&sipSelf,sipType_QBitArray,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBit(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_setBit);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_clearBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_clearBit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearBit(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_clearBit);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_toggleBit(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_toggleBit(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->toggleBit(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_toggleBit);

    return NULL;
}


extern "C" {static PyObject *meth_QBitArray_at(PyObject *, PyObject *);}
static PyObject *meth_QBitArray_at(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QBitArray *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QBitArray,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->at(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName_at);

    return NULL;
}


extern "C" {static PyObject *slot_QBitArray___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QBitArray___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        const QBitArray * a0;
        const QBitArray * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J9J9",sipType_QBitArray,&a0,sipType_QBitArray,&a1))
        {
            QBitArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBitArray((*a0 | *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBitArray___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QBitArray___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        const QBitArray * a0;
        const QBitArray * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J9J9",sipType_QBitArray,&a0,sipType_QBitArray,&a1))
        {
            QBitArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBitArray((*a0 & *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QBitArray___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QBitArray___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    int sipArgsParsed = 0;

    {
        const QBitArray * a0;
        const QBitArray * a1;

        if (sipParsePair(&sipArgsParsed,sipArg0,sipArg1,"J9J9",sipType_QBitArray,&a0,sipType_QBitArray,&a1))
        {
            QBitArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBitArray((*a0 ^ *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,NULL);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static long slot_QBitArray___hash__(PyObject *sipSelf);}
static long slot_QBitArray___hash__(PyObject *sipSelf)
{
    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 90 "sip/QtCore/qbitarray.sip"
        sipRes = qHash(*sipCpp);
#line 594 "sipQtCoreQBitArray.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QBitArray___getitem__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        int a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1i",&a0))
        {
            bool sipRes = 0;
            int sipIsErr = 0;

#line 77 "sip/QtCore/qbitarray.sip"
        SIP_SSIZE_T idx = sipConvertFromSequenceIndex(a0, sipCpp->count());
        
        if (idx < 0)
            sipIsErr = 1;
        else
            sipRes = sipCpp->operator[]((int)idx);
#line 627 "sipQtCoreQBitArray.cpp"

            if (sipIsErr)
                return 0;

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QBitArray,sipName___getitem__);

    return 0;
}


extern "C" {static PyObject *slot_QBitArray___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QBitArray * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QBitArray,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QBitArray::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QBitArray,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBitArray___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QBitArray * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QBitArray,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QBitArray::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QBitArray,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBitArray___invert__(PyObject *sipSelf);}
static PyObject *slot_QBitArray___invert__(PyObject *sipSelf)
{
    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;


    {
        {
            QBitArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBitArray(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBitArray,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QBitArray___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QBitArray * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QBitArray,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QBitArray::operator^=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBitArray___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QBitArray * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QBitArray,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QBitArray::operator|=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QBitArray___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QBitArray___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QBitArray)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QBitArray *sipCpp = reinterpret_cast<QBitArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBitArray));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QBitArray * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QBitArray,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QBitArray::operator&=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBitArray(void *, const sipTypeDef *);}
static void *cast_QBitArray(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBitArray)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBitArray(void *, int);}
static void release_QBitArray(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QBitArray *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QBitArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QBitArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBitArray *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBitArray *>(sipSrc);
}


extern "C" {static void *array_QBitArray(SIP_SSIZE_T);}
static void *array_QBitArray(SIP_SSIZE_T sipNrElem)
{
    return new QBitArray[sipNrElem];
}


extern "C" {static void *copy_QBitArray(const void *, SIP_SSIZE_T);}
static void *copy_QBitArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBitArray(reinterpret_cast<const QBitArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBitArray(sipSimpleWrapper *);}
static void dealloc_QBitArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBitArray(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QBitArray(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QBitArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QBitArray *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBitArray();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        int a0;
        bool a1 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"i|b",&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBitArray(a0,a1);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QBitArray * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QBitArray,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBitArray(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBitArray[] = {
    {(void *)slot_QBitArray___or__, or_slot},
    {(void *)slot_QBitArray___and__, and_slot},
    {(void *)slot_QBitArray___xor__, xor_slot},
    {(void *)slot_QBitArray___hash__, hash_slot},
    {(void *)slot_QBitArray___getitem__, getitem_slot},
    {(void *)slot_QBitArray___ne__, ne_slot},
    {(void *)slot_QBitArray___eq__, eq_slot},
    {(void *)slot_QBitArray___invert__, invert_slot},
    {(void *)slot_QBitArray___ixor__, ixor_slot},
    {(void *)slot_QBitArray___ior__, ior_slot},
    {(void *)slot_QBitArray___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBitArray[] = {
    {SIP_MLNAME_CAST(sipName_at), meth_QBitArray_at, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QBitArray_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clearBit), meth_QBitArray_clearBit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QBitArray_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_detach), meth_QBitArray_detach, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fill), meth_QBitArray_fill, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isDetached), meth_QBitArray_isDetached, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QBitArray_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QBitArray_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_resize), meth_QBitArray_resize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setBit), meth_QBitArray_setBit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_size), meth_QBitArray_size, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_testBit), meth_QBitArray_testBit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toggleBit), meth_QBitArray_toggleBit, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_truncate), meth_QBitArray_truncate, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtCore_QBitArray = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QBitArray,
        {0}
    },
    {
        sipNameNr_QBitArray,
        {0, 0, 1},
        15, methods_QBitArray,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QBitArray,
    init_QBitArray,
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
    dealloc_QBitArray,
    assign_QBitArray,
    array_QBitArray,
    copy_QBitArray,
    release_QBitArray,
    cast_QBitArray,
    0,
    0,
    0
},
    0,
    0,
    0
};
