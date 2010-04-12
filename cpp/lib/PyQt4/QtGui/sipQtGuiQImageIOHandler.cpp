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

#line 37 "sip/QtGui/qimageiohandler.sip"
#include <qimageiohandler.h>
#line 39 "sipQtGuiQImageIOHandler.cpp"

#line 41 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 43 "sipQtGuiQImageIOHandler.cpp"
#line 41 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtGuiQImageIOHandler.cpp"
#line 41 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 49 "sipQtGuiQImageIOHandler.cpp"
#line 43 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 52 "sipQtGuiQImageIOHandler.cpp"
#line 41 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 55 "sipQtGuiQImageIOHandler.cpp"


class sipQImageIOHandler : public QImageIOHandler
{
public:
    sipQImageIOHandler();
    virtual ~sipQImageIOHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QByteArray name() const;
    bool canRead() const;
    bool read(QImage *);
    bool write(const QImage&);
    QVariant option(QImageIOHandler::ImageOption) const;
    void setOption(QImageIOHandler::ImageOption,const QVariant&);
    bool supportsOption(QImageIOHandler::ImageOption) const;
    bool jumpToNextImage();
    bool jumpToImage(int);
    int loopCount() const;
    int imageCount() const;
    int nextImageDelay() const;
    int currentImageNumber() const;
    QRect currentImageRect() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQImageIOHandler(const sipQImageIOHandler &);
    sipQImageIOHandler &operator = (const sipQImageIOHandler &);

    char sipPyMethods[14];
};

sipQImageIOHandler::sipQImageIOHandler(): QImageIOHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQImageIOHandler::~sipQImageIOHandler()
{
    sipCommonDtor(sipPySelf);
}

QByteArray sipQImageIOHandler::name() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_name);

    if (!meth)
        return QImageIOHandler::name();

    typedef QByteArray (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState,meth,0);
}

bool sipQImageIOHandler::canRead() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QImageIOHandler,sipName_canRead);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtGui_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

bool sipQImageIOHandler::read(QImage *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QImageIOHandler,sipName_read);

    if (!meth)
        return 0;

    extern bool sipVH_QtGui_172(sip_gilstate_t,PyObject *,bool*,QImage *);

    return sipVH_QtGui_172(sipGILState,meth,0,a0);
}

bool sipQImageIOHandler::write(const QImage& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_write);

    if (!meth)
        return QImageIOHandler::write(a0);

    extern bool sipVH_QtGui_171(sip_gilstate_t,PyObject *,bool*,const QImage&);

    return sipVH_QtGui_171(sipGILState,meth,0,a0);
}

QVariant sipQImageIOHandler::option(QImageIOHandler::ImageOption a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_option);

    if (!meth)
        return QImageIOHandler::option(a0);

    extern QVariant sipVH_QtGui_170(sip_gilstate_t,PyObject *,bool*,QImageIOHandler::ImageOption);

    return sipVH_QtGui_170(sipGILState,meth,0,a0);
}

void sipQImageIOHandler::setOption(QImageIOHandler::ImageOption a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setOption);

    if (!meth)
    {
        QImageIOHandler::setOption(a0,a1);
        return;
    }

    extern void sipVH_QtGui_169(sip_gilstate_t,PyObject *,bool*,QImageIOHandler::ImageOption,const QVariant&);

    sipVH_QtGui_169(sipGILState,meth,0,a0,a1);
}

bool sipQImageIOHandler::supportsOption(QImageIOHandler::ImageOption a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_supportsOption);

    if (!meth)
        return QImageIOHandler::supportsOption(a0);

    extern bool sipVH_QtGui_168(sip_gilstate_t,PyObject *,bool*,QImageIOHandler::ImageOption);

    return sipVH_QtGui_168(sipGILState,meth,0,a0);
}

bool sipQImageIOHandler::jumpToNextImage()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_jumpToNextImage);

    if (!meth)
        return QImageIOHandler::jumpToNextImage();

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtGui_QtCore->em_virthandlers[1]))(sipGILState,meth,0);
}

bool sipQImageIOHandler::jumpToImage(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_jumpToImage);

    if (!meth)
        return QImageIOHandler::jumpToImage(a0);

    typedef bool (*sipVH_QtCore_16)(sip_gilstate_t,PyObject *,bool*,int);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtGui_QtCore->em_virthandlers[16]))(sipGILState,meth,0,a0);
}

int sipQImageIOHandler::loopCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_loopCount);

    if (!meth)
        return QImageIOHandler::loopCount();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

int sipQImageIOHandler::imageCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,NULL,sipName_imageCount);

    if (!meth)
        return QImageIOHandler::imageCount();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

int sipQImageIOHandler::nextImageDelay() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,NULL,sipName_nextImageDelay);

    if (!meth)
        return QImageIOHandler::nextImageDelay();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

int sipQImageIOHandler::currentImageNumber() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,NULL,sipName_currentImageNumber);

    if (!meth)
        return QImageIOHandler::currentImageNumber();

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *,bool*);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth,0);
}

QRect sipQImageIOHandler::currentImageRect() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[13]),sipPySelf,NULL,sipName_currentImageRect);

    if (!meth)
        return QImageIOHandler::currentImageRect();

    extern QRect sipVH_QtGui_155(sip_gilstate_t,PyObject *,bool*);

    return sipVH_QtGui_155(sipGILState,meth,0);
}


extern "C" {static PyObject *meth_QImageIOHandler_setDevice(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QIODevice * a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QIODevice,&a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDevice(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_setDevice);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_device(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_device(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            QIODevice *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->device();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_device);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        const QByteArray * a0;
        int a0State = 0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ1",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QByteArray,&a0,&a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_setFormat);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_format(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_format(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_format);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_name(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_name(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray((sipSelfWasArg ? sipCpp->QImageIOHandler::name() : sipCpp->name()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_name);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_canRead(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_canRead(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QImageIOHandler, sipName_canRead);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canRead();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_canRead);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_read(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_read(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    PyObject *sipOrigSelf = sipSelf;

    {
        QImage * a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ8",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QImage,&a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QImageIOHandler, sipName_read);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->read(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_read);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_write(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_write(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QImage * a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BJ9",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QImage,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::write(*a0) : sipCpp->write(*a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_write);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_option(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_option(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QImageIOHandler_ImageOption,&a0))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QImageIOHandler::option(a0) : sipCpp->option(a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_option);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_setOption(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_setOption(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        const QVariant * a1;
        int a1State = 0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BEJ1",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QImageIOHandler_ImageOption,&a0,sipType_QVariant,&a1,&a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QImageIOHandler::setOption(a0,*a1) : sipCpp->setOption(a0,*a1));
            Py_END_ALLOW_THREADS

            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_setOption);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_supportsOption(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_supportsOption(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler::ImageOption a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"BE",&sipSelf,sipType_QImageIOHandler,&sipCpp,sipType_QImageIOHandler_ImageOption,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::supportsOption(a0) : sipCpp->supportsOption(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_supportsOption);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_jumpToNextImage(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_jumpToNextImage(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::jumpToNextImage() : sipCpp->jumpToNextImage());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_jumpToNextImage);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_jumpToImage(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_jumpToImage(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"Bi",&sipSelf,sipType_QImageIOHandler,&sipCpp,&a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::jumpToImage(a0) : sipCpp->jumpToImage(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_jumpToImage);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_loopCount(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_loopCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::loopCount() : sipCpp->loopCount());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_loopCount);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_imageCount(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_imageCount(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::imageCount() : sipCpp->imageCount());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_imageCount);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_nextImageDelay(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_nextImageDelay(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::nextImageDelay() : sipCpp->nextImageDelay());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_nextImageDelay);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_currentImageNumber(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_currentImageNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QImageIOHandler::currentImageNumber() : sipCpp->currentImageNumber());
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_currentImageNumber);

    return NULL;
}


extern "C" {static PyObject *meth_QImageIOHandler_currentImageRect(PyObject *, PyObject *);}
static PyObject *meth_QImageIOHandler_currentImageRect(PyObject *sipSelf, PyObject *sipArgs)
{
    int sipArgsParsed = 0;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QImageIOHandler *sipCpp;

        if (sipParseArgs(&sipArgsParsed,sipArgs,"B",&sipSelf,sipType_QImageIOHandler,&sipCpp))
        {
            QRect *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect((sipSelfWasArg ? sipCpp->QImageIOHandler::currentImageRect() : sipCpp->currentImageRect()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipArgsParsed,sipName_QImageIOHandler,sipName_currentImageRect);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QImageIOHandler(void *, const sipTypeDef *);}
static void *cast_QImageIOHandler(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QImageIOHandler)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QImageIOHandler(void *, int);}
static void release_QImageIOHandler(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQImageIOHandler *>(sipCppV);
    else
        delete reinterpret_cast<QImageIOHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QImageIOHandler(sipSimpleWrapper *);}
static void dealloc_QImageIOHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQImageIOHandler *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QImageIOHandler(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QImageIOHandler(sipSimpleWrapper *, PyObject *, PyObject **, int *);}
static void *init_QImageIOHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject **, int *sipArgsParsed)
{
    sipQImageIOHandler *sipCpp = 0;

    if (!sipCpp)
    {
        if (sipParseArgs(sipArgsParsed,sipArgs,""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQImageIOHandler();
            Py_END_ALLOW_THREADS
        }
    }

    if (sipCpp)
        sipCpp->sipPySelf = sipSelf;

    return sipCpp;
}


static PyMethodDef methods_QImageIOHandler[] = {
    {SIP_MLNAME_CAST(sipName_canRead), meth_QImageIOHandler_canRead, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_currentImageNumber), meth_QImageIOHandler_currentImageNumber, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_currentImageRect), meth_QImageIOHandler_currentImageRect, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_device), meth_QImageIOHandler_device, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_format), meth_QImageIOHandler_format, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_imageCount), meth_QImageIOHandler_imageCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_jumpToImage), meth_QImageIOHandler_jumpToImage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_jumpToNextImage), meth_QImageIOHandler_jumpToNextImage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_loopCount), meth_QImageIOHandler_loopCount, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_name), meth_QImageIOHandler_name, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nextImageDelay), meth_QImageIOHandler_nextImageDelay, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_option), meth_QImageIOHandler_option, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_read), meth_QImageIOHandler_read, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setDevice), meth_QImageIOHandler_setDevice, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QImageIOHandler_setFormat, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setOption), meth_QImageIOHandler_setOption, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_supportsOption), meth_QImageIOHandler_supportsOption, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_write), meth_QImageIOHandler_write, METH_VARARGS, NULL}
};

static sipEnumMemberDef enummembers_QImageIOHandler[] = {
    {sipName_Animation, QImageIOHandler::Animation, 211},
    {sipName_BackgroundColor, QImageIOHandler::BackgroundColor, 211},
    {sipName_ClipRect, QImageIOHandler::ClipRect, 211},
    {sipName_CompressionRatio, QImageIOHandler::CompressionRatio, 211},
    {sipName_Description, QImageIOHandler::Description, 211},
    {sipName_Endianness, QImageIOHandler::Endianness, 211},
    {sipName_Gamma, QImageIOHandler::Gamma, 211},
    {sipName_IncrementalReading, QImageIOHandler::IncrementalReading, 211},
    {sipName_Name, QImageIOHandler::Name, 211},
    {sipName_Quality, QImageIOHandler::Quality, 211},
    {sipName_ScaledClipRect, QImageIOHandler::ScaledClipRect, 211},
    {sipName_ScaledSize, QImageIOHandler::ScaledSize, 211},
    {sipName_Size, QImageIOHandler::Size, 211},
    {sipName_SubType, QImageIOHandler::SubType, 211},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QImageIOHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QImageIOHandler,
        {0}
    },
    {
        sipNameNr_QImageIOHandler,
        {0, 0, 1},
        18, methods_QImageIOHandler,
        14, enummembers_QImageIOHandler,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QImageIOHandler,
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
    dealloc_QImageIOHandler,
    0,
    0,
    0,
    release_QImageIOHandler,
    cast_QImageIOHandler,
    0,
    0,
    0
},
    0,
    0,
    0
};
