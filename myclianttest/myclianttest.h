#ifndef MYCLIANTTEST_H
#define MYCLIANTTEST_H

#include <QtGui/QMainWindow>
#include "ui_myclianttest.h"
#include<QDebug>
#include"QTcpSocket"
#include"QAbstractSocket"
#include <Windows.h>
#include <QStringList>
#include <QString>
#include <QStringListModel>
#include <QFileSystemModel>
#include <QFileInfo>
#include <QDir>
#include <QMessageBox>
#include <QByteArray>
#include <QChar>
#include <QFile>
//#include <QAbsttractItemView>

class myclianttest : public QMainWindow
{
	Q_OBJECT

public:
	myclianttest(QWidget *parent = 0, Qt::WFlags flags = 0);
	~myclianttest();
	QTcpSocket *socket;
	QStringListModel *model;
	QStringListModel *modelmycomputer;
	QFileSystemModel *filemodel;
	QString rootpath;
	//QString motherpath;
	//QString servermotherpath;
	QString serveraccesspath;
	QString downloadpath;
	QString downloadfilename;

	int y;
	int x;
	int f;
	

	public slots:
		void readyRead();
		void bytesWritten(qint64 bytes);
		void disconnected();
		void list(QString serverpath);
		void connected();
		void test();
		void mycomputer(QString Path);
		void doubleClicked(const QModelIndex & index);
		void doubleClickedServer(const QModelIndex & index);
		void setpath(QString path);
		void getpath();
		void servercomputer(QByteArray listitem);
		void serverfiledown(QByteArray downitem);
		void getserverpath();
		void download();
		void Serverclicked(const QModelIndex & index );
		void gotomotherpath();
		void gotoservermotherpath();
		



private:
	Ui::myclianttestClass ui;
};

#endif // MYCLIANTTEST_H
