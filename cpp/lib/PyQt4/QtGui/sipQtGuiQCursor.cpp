/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:24 2010
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

#include "sipAPIQtGui.h"

#line 41 "sip/QtGui/qcursor.sip"
#include <qcursor.h>
#line 39 "sipQtGuiQCursor.cpp"

#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQCursor.cpp"
#line 41 "sip/QtGui/qbitmap.sip"
#include <qbitmap.h>
#line 46 "sipQtGuiQCursor.cpp"
#line 41 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 49 "sipQtGuiQCursor.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 52 "sipQtGuiQCursor.cpp"
#line 41 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 55 "sipQtGuiQCursor.cpp"


extern "C" {static PyObject *meth_QCursor_shape(PyObject *, PyObject *);}
static PyObject *meth_QCursor_shape(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QCursor,&sipCpp))
        {
            Qt::CursorShape sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->shape();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_CursorShape);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_shape);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_setShape(PyObject *, PyObject *);}
static PyObject *meth_QCursor_setShape(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        Qt::CursorShape a0;
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QCursor,&sipCpp,sipType_Qt_CursorShape,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setShape(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_setShape);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_bitmap(PyObject *, PyObject *);}
static PyObject *meth_QCursor_bitmap(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QCursor,&sipCpp))
        {
            const QBitmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bitmap();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QBitmap *>(sipRes),sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_bitmap);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_mask(PyObject *, PyObject *);}
static PyObject *meth_QCursor_mask(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QCursor,&sipCpp))
        {
            const QBitmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mask();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QBitmap *>(sipRes),sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_mask);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QCursor_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QCursor,&sipCpp))
        {
            QPixmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_pixmap);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_hotSpot(PyObject *, PyObject *);}
static PyObject *meth_QCursor_hotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QCursor *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QCursor,&sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->hotSpot());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_hotSpot);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_pos(PyObject *, PyObject *);}
static PyObject *meth_QCursor_pos(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        if (sipParseArgs(&sipArgsParsed,sipArgs,""))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(QCursor::pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_pos);

    return NULL;
}


extern "C" {static PyObject *meth_QCursor_setPos(PyObject *, PyObject *);}
static PyObject *meth_QCursor_setPos(PyObject *, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        int a1;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"ii",&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            QCursor::setPos(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QPoint * a0;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"J9",sipType_QPoint,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QCursor::setPos(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QCursor,sipName_setPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCursor(void *, const sipTypeDef *);}
static void *cast_QCursor(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCursor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCursor(void *, int);}
static void release_QCursor(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QCursor *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QCursor(void *, SIP_SSIZE_T, const void *);}
static void assign_QCursor(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCursor *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCursor *>(sipSrc);
}


extern "C" {static void *array_QCursor(SIP_SSIZE_T);}
static void *array_QCursor(SIP_SSIZE_T sipNrElem)
{
    return new QCursor[sipNrElem];
}


extern "C" {static void *copy_QCursor(const void *, SIP_SSIZE_T);}
static void *copy_QCursor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCursor(reinterpret_cast<const QCursor *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCursor(sipSimpleWrapper *);}
static void dealloc_QCursor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCursor(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QCursor(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QCursor(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QCursor *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCursor();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        Qt::CursorShape a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"E",sipType_Qt_CursorShape,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCursor(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QBitmap * a0;
        const QBitmap * a1;
        int a2 = -1;
        int a3 = -1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9J9|ii",sipType_QBitmap,&a0,sipType_QBitmap,&a1,&a2,&a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCursor(*a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QPixmap * a0;
        int a1 = -1;
        int a2 = -1;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9|ii",sipType_QPixmap,&a0,&a1,&a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCursor(*a0,a1,a2);
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QCursor * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QCursor,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QCursor(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QCursor *>(a0),sipType_QCursor,a0State);
        }
    }

    if (!sipCpp)
    {
        const QVariant * a0;
        int a0State = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J1",sipType_QVariant,&a0,&a0State))
        {
#line 72 "sip/QtGui/qcursor.sip"
        sipCpp = new QCursor(qVariantValue<QCursor>(*a0));
#line 420 "sipQtGuiQCursor.cpp"

            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);
        }
    }

    return sipCpp;
}


extern "C" {static int convertTo_QCursor(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCursor(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QCursor **sipCppPtr = reinterpret_cast<QCursor **>(sipCppPtrV);

#line 45 "sip/QtGui/qcursor.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// Qt::CursorShape to be used whenever a QCursor is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_CursorShape)) ||
            sipCanConvertToType(sipPy, sipType_QCursor, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_CursorShape)))
{
    *sipCppPtr = new QCursor((Qt::CursorShape)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCursor *>(sipConvertToType(sipPy, sipType_QCursor, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 453 "sipQtGuiQCursor.cpp"
}


static PyMethodDef methods_QCursor[] = {
    {SIP_MLNAME_CAST(sipName_bitmap), meth_QCursor_bitmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hotSpot), meth_QCursor_hotSpot, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_mask), meth_QCursor_mask, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QCursor_pixmap, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_pos), meth_QCursor_pos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setPos), meth_QCursor_setPos, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setShape), meth_QCursor_setShape, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_shape), meth_QCursor_shape, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QCursor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QCursor,
        {0}
    },
    {
        sipNameNr_QCursor,
        {0, 0, 1},
        8, methods_QCursor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QCursor,
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
    dealloc_QCursor,
    assign_QCursor,
    array_QCursor,
    copy_QCursor,
    release_QCursor,
    cast_QCursor,
    convertTo_QCursor,
    0,
    0
},
    0,
    0,
    0
};
