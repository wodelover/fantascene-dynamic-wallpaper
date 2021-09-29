/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -l DBusFileDialogHandle -i /home/lmh/0305/fantascene-dynamic-wallpaper/dde-desktop/src/dde-desktop/dbus/filedialog/dbusfiledialoghandle.h -a filedialog_adaptor.h: dbus/filedialog/com.deepin.filemanager.filedialog.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef FILEDIALOG_ADAPTOR_H
#define FILEDIALOG_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "/home/lmh/0305/fantascene-dynamic-wallpaper/dde-desktop/src/dde-desktop/dbus/filedialog/dbusfiledialoghandle.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.filemanager.filedialog
 */
class FiledialogAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.filemanager.filedialog")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.filemanager.filedialog\">\n"
"    <property access=\"readwrite\" type=\"s\" name=\"directory\"/>\n"
"    <property access=\"readwrite\" type=\"s\" name=\"directoryUrl\"/>\n"
"    <property access=\"readwrite\" type=\"as\" name=\"nameFilters\">\n"
"      <annotation value=\"QStringList\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
"    </property>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"filter\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"viewMode\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"acceptMode\"/>\n"
"    <property access=\"read\" type=\"b\" name=\"windowActive\"/>\n"
"    <property access=\"readwrite\" type=\"i\" name=\"heartbeatInterval\"/>\n"
"    <property access=\"readwrite\" type=\"u\" name=\"windowFlags\"/>\n"
"    <property access=\"readwrite\" type=\"b\" name=\"hideOnAccept\"/>\n"
"    <method name=\"selectFile\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"filename\"/>\n"
"    </method>\n"
"    <method name=\"selectedFiles\">\n"
"      <annotation value=\"QStringList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"out\" type=\"as\" name=\"filelist\"/>\n"
"    </method>\n"
"    <method name=\"selectUrl\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"url\"/>\n"
"    </method>\n"
"    <method name=\"selectedUrls\">\n"
"      <annotation value=\"QStringList\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"      <arg direction=\"out\" type=\"as\" name=\"urllist\"/>\n"
"    </method>\n"
"    <method name=\"selectNameFilter\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"filter\"/>\n"
"    </method>\n"
"    <method name=\"selectedNameFilter\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"filter\"/>\n"
"    </method>\n"
"    <method name=\"selectNameFilterByIndex\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"index\"/>\n"
"    </method>\n"
"    <method name=\"selectedNameFilterIndex\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"index\"/>\n"
"    </method>\n"
"    <method name=\"setFileMode\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"fileMode\"/>\n"
"    </method>\n"
"    <method name=\"setLabelText\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"label\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"text\"/>\n"
"    </method>\n"
"    <method name=\"labelText\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"label\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"text\"/>\n"
"    </method>\n"
"    <method name=\"setOptions\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"options\"/>\n"
"    </method>\n"
"    <method name=\"setOption\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"option\"/>\n"
"      <arg direction=\"in\" type=\"b\" name=\"on\"/>\n"
"    </method>\n"
"    <method name=\"options\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"options\"/>\n"
"    </method>\n"
"    <method name=\"testOption\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"option\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"on\"/>\n"
"    </method>\n"
"    <method name=\"setCurrentInputName\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"    </method>\n"
"    <method name=\"show\"/>\n"
"    <method name=\"open\"/>\n"
"    <method name=\"hide\"/>\n"
"    <method name=\"accept\"/>\n"
"    <method name=\"reject\"/>\n"
"    <method name=\"winId\">\n"
"      <arg direction=\"out\" type=\"t\" name=\"windowId\"/>\n"
"    </method>\n"
"    <method name=\"setWindowTitle\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"title\"/>\n"
"    </method>\n"
"    <method name=\"deleteLater\"/>\n"
"    <method name=\"activateWindow\"/>\n"
"    <method name=\"makeHeartbeat\"/>\n"
"    <method name=\"addCustomWidget\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"type\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"data\"/>\n"
"    </method>\n"
"    <method name=\"getCustomWidgetValue\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"type\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"text\"/>\n"
"      <arg direction=\"out\" type=\"v\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"allCustomWidgetsValue\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"type\"/>\n"
"      <arg direction=\"out\" type=\"a{sv}\" name=\"values\"/>\n"
"      <annotation value=\"QMap&lt;QString,QVariant&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"    <method name=\"beginAddCustomWidget\"/>\n"
"    <method name=\"endAddCustomWidget\"/>\n"
"    <method name=\"addDisableUrlScheme\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"type\"/>\n"
"    </method>\n"
"    <method name=\"setAllowMixedSelection\">\n"
"      <arg direction=\"in\" type=\"b\" name=\"on\"/>\n"
"    </method>\n"
"    <signal name=\"finished\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"result\"/>\n"
"    </signal>\n"
"    <signal name=\"accepted\"/>\n"
"    <signal name=\"rejected\"/>\n"
"    <signal name=\"windowActiveChanged\"/>\n"
"    <signal name=\"destroyed\"/>\n"
"    <signal name=\"selectionFilesChanged\"/>\n"
"    <signal name=\"currentUrlChanged\"/>\n"
"    <signal name=\"directoryChanged\"/>\n"
"    <signal name=\"directoryUrlChanged\"/>\n"
"    <signal name=\"selectedNameFilterChanged\"/>\n"
"  </interface>\n"
        "")
public:
    FiledialogAdaptor(DBusFileDialogHandle *parent);
    virtual ~FiledialogAdaptor();

    inline DBusFileDialogHandle *parent() const
    { return static_cast<DBusFileDialogHandle *>(QObject::parent()); }

public: // PROPERTIES
    Q_PROPERTY(int acceptMode READ acceptMode WRITE setAcceptMode)
    int acceptMode() const;
    void setAcceptMode(int value);

    Q_PROPERTY(QString directory READ directory WRITE setDirectory)
    QString directory() const;
    void setDirectory(const QString &value);

    Q_PROPERTY(QString directoryUrl READ directoryUrl WRITE setDirectoryUrl)
    QString directoryUrl() const;
    void setDirectoryUrl(const QString &value);

    Q_PROPERTY(int filter READ filter WRITE setFilter)
    int filter() const;
    void setFilter(int value);

    Q_PROPERTY(int heartbeatInterval READ heartbeatInterval WRITE setHeartbeatInterval)
    int heartbeatInterval() const;
    void setHeartbeatInterval(int value);

    Q_PROPERTY(bool hideOnAccept READ hideOnAccept WRITE setHideOnAccept)
    bool hideOnAccept() const;
    void setHideOnAccept(bool value);

    Q_PROPERTY(QStringList nameFilters READ nameFilters WRITE setNameFilters)
    QStringList nameFilters() const;
    void setNameFilters(const QStringList &value);

    Q_PROPERTY(int viewMode READ viewMode WRITE setViewMode)
    int viewMode() const;
    void setViewMode(int value);

    Q_PROPERTY(bool windowActive READ windowActive)
    bool windowActive() const;

    Q_PROPERTY(uint windowFlags READ windowFlags WRITE setWindowFlags)
    uint windowFlags() const;
    void setWindowFlags(uint value);

public Q_SLOTS: // METHODS
    void accept();
    void activateWindow();
    void addCustomWidget(int type, const QString &data);
    void addDisableUrlScheme(const QString &type);
    QMap<QString,QVariant> allCustomWidgetsValue(int type);
    void beginAddCustomWidget();
    void deleteLater();
    void endAddCustomWidget();
    QDBusVariant getCustomWidgetValue(int type, const QString &text);
    void hide();
    QString labelText(int label);
    void makeHeartbeat();
    void open();
    int options();
    void reject();
    void selectFile(const QString &filename);
    void selectNameFilter(const QString &filter);
    void selectNameFilterByIndex(int index);
    void selectUrl(const QString &url);
    QStringList selectedFiles();
    QString selectedNameFilter();
    int selectedNameFilterIndex();
    QStringList selectedUrls();
    void setAllowMixedSelection(bool on);
    void setCurrentInputName(const QString &name);
    void setFileMode(int fileMode);
    void setLabelText(int label, const QString &text);
    void setOption(int option, bool on);
    void setOptions(int options);
    void setWindowTitle(const QString &title);
    void show();
    bool testOption(int option);
    qulonglong winId();
Q_SIGNALS: // SIGNALS
    void accepted();
    void currentUrlChanged();
    void destroyed();
    void directoryChanged();
    void directoryUrlChanged();
    void finished(int result);
    void rejected();
    void selectedNameFilterChanged();
    void selectionFilesChanged();
    void windowActiveChanged();
};

#endif
