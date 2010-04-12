/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:32 2010
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

#include "sipAPIQtSql.h"

#line 37 "sip/QtSql/qsqlrecord.sip"
#include <qsqlrecord.h>
#line 39 "sipQtSqlQSqlRecord.cpp"

#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtSqlQSqlRecord.cpp"
#line 37 "sip/QtSql/qsqlfield.sip"
#include <qsqlfield.h>
#line 46 "sipQtSqlQSqlRecord.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 49 "sipQtSqlQSqlRecord.cpp"


extern "C" {static PyObject *meth_QSqlRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->value(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_value);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_setValue(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        const QVariant * a1;
        int a1State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BiJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0,sipType_QVariant,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QVariant * a1;
        int a1State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1J1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State,sipType_QVariant,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_setValue);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_setNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setNull(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNull(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNull(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_setNull);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_isNull);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_indexOf(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_indexOf(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexOf(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_indexOf);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_fieldName(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_fieldName(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fieldName(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_fieldName);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_field(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_field(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            QSqlField *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSqlField(sipCpp->field(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSqlField,NULL);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            QSqlField *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSqlField(sipCpp->field(*a0));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSqlField,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_field);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_isGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isGenerated(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_isGenerated);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_setGenerated(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_setGenerated(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        bool a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1b",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(*a0,a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        bool a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bib",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGenerated(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_setGenerated);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_append(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_append(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QSqlField * a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QSqlField,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->append(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_append);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_replace(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_replace(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        const QSqlField * a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BiJ9",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0,sipType_QSqlField,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->replace(a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_replace);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_insert(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        const QSqlField * a1;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BiJ9",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0,sipType_QSqlField,&a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->insert(a0,*a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_insert);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_remove(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        int a0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QSqlRecord,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_remove);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlRecord,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_isEmpty);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_contains(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QString * a0;
        int a0State = 0;
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QSqlRecord,&sipCpp,sipType_QString,&a0,&a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contains(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_contains);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_clear(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlRecord,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_clear);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_clearValues(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_clearValues(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlRecord,&sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clearValues();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_clearValues);

    return NULL;
}


extern "C" {static PyObject *meth_QSqlRecord_count(PyObject *, PyObject *);}
static PyObject *meth_QSqlRecord_count(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QSqlRecord *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QSqlRecord,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QSqlRecord,sipName_count);

    return NULL;
}


extern "C" {static PyObject *slot_QSqlRecord___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSqlRecord___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlRecord *sipCpp = reinterpret_cast<QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSqlRecord * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QSqlRecord,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlRecord::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtSql,ne_slot,sipType_QSqlRecord,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSqlRecord___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QSqlRecord___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSqlRecord *sipCpp = reinterpret_cast<QSqlRecord *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSqlRecord));

    if (!sipCpp)
        return 0;

    int sipArgsParsed = 0;

    {
        const QSqlRecord * a0;

        if (sipParseArgs(&sipArgsParsed,sipArg,"1J9",sipType_QSqlRecord,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSqlRecord::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    return sipPySlotExtend(&sipModuleAPI_QtSql,eq_slot,sipType_QSqlRecord,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSqlRecord(void *, const sipTypeDef *);}
static void *cast_QSqlRecord(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSqlRecord)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSqlRecord(void *, int);}
static void release_QSqlRecord(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSqlRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSqlRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QSqlRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSqlRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSqlRecord *>(sipSrc);
}


extern "C" {static void *array_QSqlRecord(SIP_SSIZE_T);}
static void *array_QSqlRecord(SIP_SSIZE_T sipNrElem)
{
    return new QSqlRecord[sipNrElem];
}


extern "C" {static void *copy_QSqlRecord(const void *, SIP_SSIZE_T);}
static void *copy_QSqlRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSqlRecord(reinterpret_cast<const QSqlRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSqlRecord(sipSimpleWrapper *);}
static void dealloc_QSqlRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSqlRecord(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QSqlRecord(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QSqlRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    QSqlRecord *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlRecord();
            Py_END_ALLOW_THREADS
        }
    }

    if (!sipCpp)
    {
        const QSqlRecord * a0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"J9",sipType_QSqlRecord,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSqlRecord(*a0);
            Py_END_ALLOW_THREADS
        }
    }

    return sipCpp;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSqlRecord[] = {
    {(void *)slot_QSqlRecord___ne__, ne_slot},
    {(void *)slot_QSqlRecord___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSqlRecord[] = {
    {SIP_MLNAME_CAST(sipName_append), meth_QSqlRecord_append, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clear), meth_QSqlRecord_clear, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_clearValues), meth_QSqlRecord_clearValues, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contains), meth_QSqlRecord_contains, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_count), meth_QSqlRecord_count, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_field), meth_QSqlRecord_field, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_fieldName), meth_QSqlRecord_fieldName, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_indexOf), meth_QSqlRecord_indexOf, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_insert), meth_QSqlRecord_insert, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QSqlRecord_isEmpty, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isGenerated), meth_QSqlRecord_isGenerated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSqlRecord_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_remove), meth_QSqlRecord_remove, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_replace), meth_QSqlRecord_replace, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setGenerated), meth_QSqlRecord_setGenerated, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setNull), meth_QSqlRecord_setNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QSqlRecord_setValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_value), meth_QSqlRecord_value, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtSql_QSqlRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSqlRecord,
        {0}
    },
    {
        sipNameNr_QSqlRecord,
        {0, 0, 1},
        18, methods_QSqlRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSqlRecord,
    init_QSqlRecord,
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
    dealloc_QSqlRecord,
    assign_QSqlRecord,
    array_QSqlRecord,
    copy_QSqlRecord,
    release_QSqlRecord,
    cast_QSqlRecord,
    0,
    0,
    0
},
    0,
    0,
    0
};
