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

#line 716 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 39 "sipQtCoreQList0100QLocaleCountry.cpp"

#line 41 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 43 "sipQtCoreQList0100QLocaleCountry.cpp"


extern "C" {static void assign_QList_0100QLocale_Country(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QLocale_Country(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QLocale::Country> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QLocale::Country> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QLocale_Country(SIP_SSIZE_T);}
static void *array_QList_0100QLocale_Country(SIP_SSIZE_T sipNrElem)
{
    return new QList<QLocale::Country>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QLocale_Country(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QLocale_Country(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QLocale::Country>(reinterpret_cast<const QList<QLocale::Country> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QLocale_Country(void *, int);}
static void release_QList_0100QLocale_Country(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QLocale::Country> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QLocale_Country(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QLocale_Country(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QLocale::Country> **sipCppPtr = reinterpret_cast<QList<QLocale::Country> **>(sipCppPtrV);

#line 746 "sip/QtCore/qlocale.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (PyObject_TypeCheck(PyList_GET_ITEM(sipPy, i), sipTypeAsPyTypeObject(sipType_QLocale_Country)))
                return 0;

        return 1;
    }

    QList<QLocale::Country> *ql = new QList<QLocale::Country>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        long l = SIPLong_AsLong(PyList_GET_ITEM(sipPy, i));
        ql->append(static_cast<QLocale::Country>(l));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 108 "sipQtCoreQList0100QLocaleCountry.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QLocale_Country(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QLocale_Country(void *sipCppV,PyObject *)
{
   QList<QLocale::Country> *sipCpp = reinterpret_cast<QList<QLocale::Country> *>(sipCppV);

#line 720 "sip/QtCore/qlocale.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QLocale::Country e = sipCpp->at(i);
        PyObject *eobj;

        if ((eobj = sipConvertFromEnum(e, sipType_QLocale_Country)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, eobj);
    }

    return l;
#line 141 "sipQtCoreQList0100QLocaleCountry.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QLocale_Country = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3999,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QLocale_Country,
    array_QList_0100QLocale_Country,
    copy_QList_0100QLocale_Country,
    release_QList_0100QLocale_Country,
    convertTo_QList_0100QLocale_Country,
    convertFrom_QList_0100QLocale_Country
};
