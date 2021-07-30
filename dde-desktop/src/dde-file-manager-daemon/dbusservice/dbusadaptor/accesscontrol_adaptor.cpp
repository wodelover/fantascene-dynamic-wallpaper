/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -i accesscontrol/accesscontrolmanager.h -c AccessControlAdaptor -l AccessControlManager -a dbusadaptor/accesscontrol_adaptor accesscontrol.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dbusadaptor/accesscontrol_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class AccessControlAdaptor
 */

AccessControlAdaptor::AccessControlAdaptor(AccessControlManager *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

AccessControlAdaptor::~AccessControlAdaptor()
{
    // destructor
}

QVariantList AccessControlAdaptor::QueryAccessPolicy()
{
    // handle method call com.deepin.filemanager.daemon.AccessControlManager.QueryAccessPolicy
    return parent()->QueryAccessPolicy();
}

QString AccessControlAdaptor::SetAccessPolicy(const QVariantMap &policy)
{
    // handle method call com.deepin.filemanager.daemon.AccessControlManager.SetAccessPolicy
    return parent()->SetAccessPolicy(policy);
}

