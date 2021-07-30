/*
 * Copyright (C) 2020 ~ 2021 Uniontech Software Technology Co., Ltd.
 *
 * Author:     zhangyu<zhangyub@uniontech.com>
 *
 * Maintainer: zhangyu<zhangyub@uniontech.com>
 *             wangchunlin<wangchunlin@uniontech.com>
 *             liqiang<liqianga@uniontech.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -p licenseInterface.h
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */


#ifndef LICENCEINTERFACE_H
#define LICENCEINTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.license
 */
class ComDeepinLicenseInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.license.Info"; }

public:
    ComDeepinLicenseInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~ComDeepinLicenseInterface();

    Q_PROPERTY(int AuthorizationState READ AuthorizationState)
    inline int AuthorizationState() const
    { return qvariant_cast< int >(property("AuthorizationState")); }

Q_SIGNALS: // SIGNALS
    void LicenseStateChange();

};

namespace com {
  namespace deepin {
    namespace license {
      typedef ::ComDeepinLicenseInterface Info;
    }
  }
}

#endif // LICENCEINTERFACE_H
