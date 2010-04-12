/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.9.1 on Wed Feb 17 09:47:27 2010
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

#include "sipAPIQtNetwork.h"

#line 39 "sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 39 "sipQtNetworkQNetworkAccessManager.cpp"

#line 40 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtNetworkQNetworkAccessManager.cpp"
#line 194 "sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 46 "sipQtNetworkQNetworkAccessManager.cpp"
#line 155 "sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 49 "sipQtNetworkQNetworkAccessManager.cpp"
#line 39 "sip/QtNetwork/qnetworkreply.sip"
#include <qnetworkreply.h>
#line 52 "sipQtNetworkQNetworkAccessManager.cpp"
#line 39 "sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 55 "sipQtNetworkQNetworkAccessManager.cpp"
#line 41 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 58 "sipQtNetworkQNetworkAccessManager.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtNetworkQNetworkAccessManager.cpp"
#line 40 "sip/QtNetwork/qsslerror.sip"
#include <qsslerror.h>
#line 64 "sipQtNetworkQNetworkAccessManager.cpp"
#line 39 "sip/QtNetwork/qauthenticator.sip"
#include <qauthenticator.h>
#line 67 "sipQtNetworkQNetworkAccessManager.cpp"
#line 37 "sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 70 "sipQtNetworkQNetworkAccessManager.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 73 "sipQtNetworkQNetworkAccessManager.cpp"
#line 84 "sip/QtNetwork/qnetworkcookie.sip"
#include <qnetworkcookie.h>
#line 76 "sipQtNetworkQNetworkAccessManager.cpp"
#line 37 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 79 "sipQtNetworkQNetworkAccessManager.cpp"
#line 292 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 82 "sipQtNetworkQNetworkAccessManager.cpp"
#line 279 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 85 "sipQtNetworkQNetworkAccessManager.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 88 "sipQtNetworkQNetworkAccessManager.cpp"
#line 38 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 91 "sipQtNetworkQNetworkAccessManager.cpp"
#line 40 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 94 "sipQtNetworkQNetworkAccessManager.cpp"
#line 125 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 97 "sipQtNetworkQNetworkAccessManager.cpp"
#line 37 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 100 "sipQtNetworkQNetworkAccessManager.cpp"
#line 41 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 103 "sipQtNetworkQNetworkAccessManager.cpp"
#line 41 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 106 "sipQtNetworkQNetworkAccessManager.cpp"
#line 37 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 109 "sipQtNetworkQNetworkAccessManager.cpp"


class sipQNetworkAccessManager : public QNetworkAccessManager
{
public:
    sipQNetworkAccessManager(QObject *);
    virtual ~sipQNetworkAccessManager();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    int sipProtect_receivers(const char *) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent *);
    void sipProtectVirt_childEvent(bool,QChildEvent *);
    void sipProtectVirt_customEvent(bool,QEvent *);
    void sipProtectVirt_connectNotify(bool,const char *);
    void sipProtectVirt_disconnectNotify(bool,const char *);
    QNetworkReply * sipProtectVirt_createRequest(bool,QNetworkAccessManager::Operation,const QNetworkRequest&,QIODevice *);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QNetworkReply * createRequest(QNetworkAccessManager::Operation,const QNetworkRequest&,QIODevice *);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQNetworkAccessManager(const sipQNetworkAccessManager &);
    sipQNetworkAccessManager &operator = (const sipQNetworkAccessManager &);

    char sipPyMethods[8];
};

sipQNetworkAccessManager::sipQNetworkAccessManager(QObject *a0): QNetworkAccessManager(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQNetworkAccessManager::~sipQNetworkAccessManager()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQNetworkAccessManager::metaObject() const
{
    return sip_QtNetwork_qt_metaobject(sipPySelf,sipType_QNetworkAccessManager);
}

int sipQNetworkAccessManager::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtNetwork_qt_metacall(sipPySelf,sipType_QNetworkAccessManager,_c,_id,_a);

    return _id;
}

void *sipQNetworkAccessManager::qt_metacast(const char *_clname)
{
    return (sip_QtNetwork_qt_metacast && sip_QtNetwork_qt_metacast(sipPySelf,sipType_QNetworkAccessManager,_clname)) ? this : QNetworkAccessManager::qt_metacast(_clname);
}

QNetworkReply * sipQNetworkAccessManager::createRequest(QNetworkAccessManager::Operation a0,const QNetworkRequest& a1,QIODevice *a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_createRequest);

    if (!meth)
        return QNetworkAccessManager::createRequest(a0,a1,a2);

    extern QNetworkReply * sipVH_QtNetwork_14(sip_gilstate_t,PyObject *,bool*,QNetworkAccessManager::Operation,const QNetworkRequest&,QIODevice *);

    return sipVH_QtNetwork_14(sipGILState,meth,0,a0,a1,a2);
}

bool sipQNetworkAccessManager::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[12]))(sipGILState,meth,0,a0);
}

bool sipQNetworkAccessManager::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,bool*,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[20]))(sipGILState,meth,0,a0,a1);
}

void sipQNetworkAccessManager::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,bool*,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[3]))(sipGILState,meth,0,a0);
}

void sipQNetworkAccessManager::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,bool*,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[19]))(sipGILState,meth,0,a0);
}

void sipQNetworkAccessManager::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,bool*,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[18]))(sipGILState,meth,0,a0);
}

void sipQNetworkAccessManager::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

void sipQNetworkAccessManager::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,bool*,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[17]))(sipGILState,meth,0,a0);
}

int sipQNetworkAccessManager::sipProtect_receivers(const char *a0) const
{
    return QObject::receivers(a0);
}

void sipQNetworkAccessManager::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent *a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQNetworkAccessManager::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent *a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQNetworkAccessManager::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent *a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQNetworkAccessManager::sipProtectVirt_connectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQNetworkAccessManager::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const char *a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

QNetworkReply * sipQNetworkAccessManager::sipProtectVirt_createRequest(bool sipSelfWasArg,QNetworkAccessManager::Operation a0,const QNetworkRequest& a1,QIODevice *a2)
{
    return (sipSelfWasArg ? QNetworkAccessManager::createRequest(a0,a1,a2) : createRequest(a0,a1,a2));
}


extern "C" {static PyObject *meth_QNetworkAccessManager_receivers(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_receivers(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        char * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,&a0))
        {
            int sipRes = 0;

#line 480 "sip/QtCore/qobject.sip"
        // We need to take into account any proxies for Python signals. Import the
        // helper if it hasn't already been done.
        typedef int (*helper_func)(QObject *, const char *, int);
        
        static helper_func helper = 0;
        
        if (!helper)
            helper = (helper_func)sipImportSymbol("qpycore_qobject_receivers");
        
        if (helper)
            sipRes = helper(sipCpp, a0, sipCpp->sipProtect_receivers(a0));
#line 384 "sipQtNetworkQNetworkAccessManager.cpp"

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_receivers);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_timerEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_timerEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QTimerEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_timerEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_childEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_childEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QChildEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_childEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_customEvent(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_customEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pJ8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QEvent,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_customEvent);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_connectNotify(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_connectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_connectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_disconnectNotify(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        char * a0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pG",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_disconnectNotify);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_proxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_proxy(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkAccessManager,&sipCpp))
        {
            QNetworkProxy *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy(sipCpp->proxy());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_proxy);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_setProxy(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_setProxy(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QNetworkProxy * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkProxy,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProxy(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_setProxy);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_cookieJar(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_cookieJar(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkAccessManager,&sipCpp))
        {
            QNetworkCookieJar *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->cookieJar();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkCookieJar,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_cookieJar);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_setCookieJar(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_setCookieJar(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkCookieJar * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ:",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkCookieJar,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCookieJar(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_setCookieJar);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_head(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_head(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QNetworkRequest * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->head(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_head);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_get(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_get(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QNetworkRequest * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->get(*a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_get);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_post(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_post(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QNetworkRequest * a0;
        QIODevice * a1;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0,sipType_QIODevice,&a1))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->post(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    {
        const QNetworkRequest * a0;
        const QByteArray * a1;
        int a1State = 0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J1",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0,sipType_QByteArray,&a1,&a1State))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->post(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_post);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_put(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_put(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QNetworkRequest * a0;
        QIODevice * a1;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0,sipType_QIODevice,&a1))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->put(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    {
        const QNetworkRequest * a0;
        const QByteArray * a1;
        int a1State = 0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9J1",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkRequest,&a0,sipType_QByteArray,&a1,&a1State))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->put(*a0,*a1);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipConvertFromType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_put);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_createRequest(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_createRequest(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QNetworkAccessManager::Operation a0;
        const QNetworkRequest * a1;
        QIODevice * a2 = 0;
        sipQNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"pEJ9|J8",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkAccessManager_Operation,&a0,sipType_QNetworkRequest,&a1,sipType_QIODevice,&a2))
        {
            QNetworkReply *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_createRequest(sipSelfWasArg,a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkReply,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_createRequest);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_proxyFactory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_proxyFactory(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkAccessManager,&sipCpp))
        {
            QNetworkProxyFactory *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->proxyFactory();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QNetworkProxyFactory,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_proxyFactory);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_setProxyFactory(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_setProxyFactory(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkProxyFactory * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ:",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QNetworkProxyFactory,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProxyFactory(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_setProxyFactory);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_cache(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_cache(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QNetworkAccessManager,&sipCpp))
        {
            QAbstractNetworkCache *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->cache();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractNetworkCache,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_cache);

    return NULL;
}


extern "C" {static PyObject *meth_QNetworkAccessManager_setCache(PyObject *, PyObject *);}
static PyObject *meth_QNetworkAccessManager_setCache(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QAbstractNetworkCache * a0;
        QNetworkAccessManager *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ:",&sipSelf,sipType_QNetworkAccessManager,&sipCpp,sipType_QAbstractNetworkCache,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCache(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QNetworkAccessManager,sipName_setCache);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkAccessManager(void *, const sipTypeDef *);}
static void *cast_QNetworkAccessManager(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QNetworkAccessManager)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QNetworkAccessManager *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkAccessManager(void *, int);}
static void release_QNetworkAccessManager(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQNetworkAccessManager *>(sipCppV);
    else
        delete reinterpret_cast<QNetworkAccessManager *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkAccessManager(sipSimpleWrapper *);}
static void dealloc_QNetworkAccessManager(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQNetworkAccessManager *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkAccessManager(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QNetworkAccessManager(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QNetworkAccessManager(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **sipOwner, int *sipArgsParsed)
{
    sipQNetworkAccessManager *sipCpp = 0;

    if (!sipCpp)
    {
        QObject * a0 = 0;

        if (sipParseArgs(sipArgsParsed,sipArgs,"|JH",sipType_QObject,&a0,sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQNetworkAccessManager(a0);
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QNetworkAccessManager[] = {{111, 0, 1}};


static PyMethodDef methods_QNetworkAccessManager[] = {
    {SIP_MLNAME_CAST(sipName_cache), meth_QNetworkAccessManager_cache, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_childEvent), meth_QNetworkAccessManager_childEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), meth_QNetworkAccessManager_connectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_cookieJar), meth_QNetworkAccessManager_cookieJar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createRequest), meth_QNetworkAccessManager_createRequest, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), meth_QNetworkAccessManager_customEvent, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), meth_QNetworkAccessManager_disconnectNotify, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_get), meth_QNetworkAccessManager_get, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_head), meth_QNetworkAccessManager_head, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_post), meth_QNetworkAccessManager_post, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_proxy), meth_QNetworkAccessManager_proxy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_proxyFactory), meth_QNetworkAccessManager_proxyFactory, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_put), meth_QNetworkAccessManager_put, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), meth_QNetworkAccessManager_receivers, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCache), meth_QNetworkAccessManager_setCache, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setCookieJar), meth_QNetworkAccessManager_setCookieJar, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setProxy), meth_QNetworkAccessManager_setProxy, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setProxyFactory), meth_QNetworkAccessManager_setProxyFactory, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), meth_QNetworkAccessManager_timerEvent, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QNetworkAccessManager[] = {
    {sipName_GetOperation, QNetworkAccessManager::GetOperation, 39},
    {sipName_HeadOperation, QNetworkAccessManager::HeadOperation, 39},
    {sipName_PostOperation, QNetworkAccessManager::PostOperation, 39},
    {sipName_PutOperation, QNetworkAccessManager::PutOperation, 39},
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QNetworkAccessManager[] = {
    {"sslErrors(QNetworkReply *,const QList<QSslError>&)", 0},
    {"finished(QNetworkReply *)", 0},
    {"authenticationRequired(QNetworkReply *,QAuthenticator *)", 0},
    {"proxyAuthenticationRequired(const QNetworkProxy&,QAuthenticator *)", 0},
    {0, 0}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkAccessManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QNetworkAccessManager,
        {0}
    },
    {
        sipNameNr_QNetworkAccessManager,
        {0, 0, 1},
        19, methods_QNetworkAccessManager,
        4, enummembers_QNetworkAccessManager,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    -1,
    -1,
    supers_QNetworkAccessManager,
    0,
    init_QNetworkAccessManager,
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
    dealloc_QNetworkAccessManager,
    0,
    0,
    0,
    release_QNetworkAccessManager,
    cast_QNetworkAccessManager,
    0,
    0,
    0
},
    &QNetworkAccessManager::staticMetaObject,
    0,
    pyqt4_signals_QNetworkAccessManager
};
