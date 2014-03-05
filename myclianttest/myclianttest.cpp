#include "myclianttest.h"

myclianttest::myclianttest(QWidget *parent, Qt::WFlags flags)
: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	ui.pushButton_2->setEnabled(false);
	ui.pushButton_4->setEnabled(false);
	ui.pushButton_5->setEnabled(false);
	ui.pushButton_6->setEnabled(false);
	ui.pushButton_7->setEnabled(false);
	ui.pushButton_8->setEnabled(false);
	ui.lineEdit->setEnabled(false);
	ui.lineEdit_2->setEnabled(false);
	ui.lineEdit_3->setText("127.0.0.1");


}

myclianttest::~myclianttest()
{

}


void myclianttest::test()
{

	socket = new QTcpSocket(this);

	connect(socket,SIGNAL(connected()),this,SLOT(connected()));
	connect(socket,SIGNAL(disconnected()),this,SLOT(disconnected()));
	connect(socket,SIGNAL(bytesWritten(qint64 )),this,SLOT(bytesWritten(qint64 )));
	connect(socket,SIGNAL(readyRead()),this,SLOT(readyRead()));
	connect(ui.listView,SIGNAL(doubleClicked(const QModelIndex)),this,SLOT(doubleClicked(const QModelIndex)));
	connect(ui.listView_2,SIGNAL(doubleClicked(const QModelIndex)),this,SLOT(doubleClickedServer(const QModelIndex)));
	connect(ui.listView_2,SIGNAL(clicked(const QModelIndex)),this,SLOT(Serverclicked(const QModelIndex)));



	qDebug()<<"conneting...";
	if(ui.lineEdit_3->text()=="")
	{
			socket->connectToHost("127.0.0.1",80);

	}
	else
	{
		socket->connectToHost(ui.lineEdit_3->text(),80);
	}


	if(!socket->waitForConnected(5000))
	{
		qDebug()<<"Error:"<<socket->errorString();
	}

}


void myclianttest::connected()
{
	qDebug()<<"connected";

	ui.pushButton_2->setEnabled(true);
	ui.pushButton_4->setEnabled(true);
	ui.pushButton_5->setEnabled(true);
	ui.pushButton_6->setEnabled(true);
	ui.pushButton_7->setEnabled(true);
	ui.pushButton_8->setEnabled(true);
	ui.lineEdit->setEnabled(true);
	ui.lineEdit_2->setEnabled(true);
	ui.pushButton->setEnabled(false);
	ui.lineEdit_3->setEnabled(false);

	setpath("");	
	list("");

}



void myclianttest::disconnected()
{
	qDebug()<<"disconnected";


}



void myclianttest::bytesWritten(qint64 bytes)
{
	qDebug()<<"we worte:"<<bytes;

}




void myclianttest::readyRead()
{


	QByteArray command = socket->readAll();

	if(command.startsWith("start"))
	{

		x=1;
		servercomputer(command);


	}
	else if(command.startsWith("downstart"))
	{


		x=2;
		serverfiledown(command);


	}
	else
	{
		if(x==1)
		{
			servercomputer(command);

		}
		else if (x==2)
		{

			serverfiledown(command);
		}
	}


}



void myclianttest::list(QString serverpath)
{

	serveraccesspath= serverpath;

	//if (serveraccesspath.endsWith("/.."))
	//{
	//	int l =serveraccesspath.length ();
	//	l=l-3;
	//	serveraccesspath.remove(l,3);
	//}
	ui.lineEdit->setText(serveraccesspath);
	QString serverpathcall;


	if(!(serverpath==""))
	{
		serverpathcall="LIST ";
		serverpathcall.append(serverpath);
		serverpathcall.append("\n");		


		//QMessageBox msgBox;
		//msgBox.setText(serverpathcall);
		//msgBox.exec();

	}
	else
	{
		serveraccesspath="D:/Dawnload";
		ui.lineEdit->setText(serveraccesspath);

	}


	//conver server path to char* bcz write() function need char*
	QByteArray ba = serverpathcall.toLatin1();
	const char *tolist = ba.data();

	if(serverpath=="")
	{


		socket->write("LIST\n");

	}
	else
	{

		socket->write(tolist);
	}


}



void myclianttest::mycomputer(QString Path)
{
	QStringList Line;
	QFileInfo fi(Path);

	if(!fi.exists())
	{
		//Not found
	}
	else
	{
		//Found
		if(fi.isDir())
		{
			QDir dir(Path);

			//list a directory
			//qDebug() << "LIST SEND DIRECTORY";
			foreach(QFileInfo item, dir.entryInfoList())
			{
				Line.append(item.fileName());


				//mSocket->waitForBytesWritten();
			}

		}
		else
		{
			Line.append(fi.fileName());

		}
	}



	modelmycomputer = new QStringListModel();
	modelmycomputer->setStringList(Line);
	ui.listView->setModel(modelmycomputer);


}



void myclianttest::setpath(QString path)
{

	if(path=="")
	{
		rootpath ="D:";
	}
	else
	{
		rootpath=path;
	}
	QFileInfo fi(rootpath);
	if(fi.isDir())
	{
		mycomputer(rootpath);

	}
	//if (rootpath.endsWith("/.."))
	//{
	//	int l =path.length ();
	//	l=l-3;
	//	rootpath.remove(l,3);
	//}
	ui.lineEdit_2->setText(rootpath);



}



void myclianttest::getpath()
{
	QString path = ui.lineEdit_2->text();
	setpath(path);

}




void myclianttest::getserverpath()
{
	QString path=ui.lineEdit->text();
	list(path);
}



void myclianttest::doubleClicked(const QModelIndex & index)
{

	QVariant aa=index.data(0);
	const QString sss=aa.toString();

	QString path=rootpath;
	path.append("/");
	path.append(sss);

	QFileInfo fi(path);
	if(fi.isDir())
	{
		setpath(path);

	}




}



void myclianttest::doubleClickedServer(const QModelIndex & index)
{

	QVariant aa=index.data(0);
	QString sss=aa.toString();
	int x = sss.length();
	x = x-1;
	sss.remove(x, 1);



	QString path=serveraccesspath;
	path.append("/");
	path.append(sss);

	//QFileInfo fi(path);
	//if(fi.isDir())
	{

		list(path);

	}

}


void myclianttest::Serverclicked(const QModelIndex & index )
{
	QVariant aa=index.data(0);
	QString sss=aa.toString();
	int x = sss.length();
	x = x-1;
	sss.remove(x, 1);
	downloadfilename=sss;

	QString path=serveraccesspath;
	path.append("/");
	path.append(sss);
	downloadpath= path;

}



void myclianttest::servercomputer(QByteArray listitem)
{
	QString listifno;
	listifno.append(listitem);
	if(listifno.endsWith("finish"))
	{
		QStringList listinfo2;
		listinfo2=listifno.split("\n");
		listinfo2.removeFirst();
		listinfo2.removeLast();
		model = new QStringListModel();
		model->setStringList(listinfo2);
		ui.listView_2->setModel(model);

	}


}




void myclianttest::serverfiledown(QByteArray downitem)
{
	QFile file(downloadfilename);
	if(!file.exists()||f==1)
	{
		file.open(QIODevice::Append);
		if(downitem.startsWith("downstart"))
		{
			f=1;
			if (downitem.endsWith("finishdown"))
			{
				f=2;
				QByteArray first=downitem;
				first=first.remove(0,9);
				int x=first.length();
				x=x-10;

				file.write(first.remove(x,10));

				file.close();
				MessageBoxA(0,"download complite","download",0);

			}
			else
			{
				QByteArray first=downitem;

				file.write(first.remove(0,9));


			}



		}
		else if ((downitem.endsWith("finishdown"))&&!(downitem.startsWith("downstart")))
		{
			f=2;
			QByteArray first=downitem;
			int x=first.length();
			x=x-10;

			file.write(first.remove(x,10));

			file.close();
			MessageBoxA(0,"download complite","download",0);
		}
		else
		{

			file.write(downitem);

		}

	}
	else
	{

		MessageBoxA(0,"file already exist","error",0);
	}


}



void myclianttest::download()
{

	QString serverdowncall;

	serverdowncall="RETR ";
	serverdowncall.append(downloadpath);
	serverdowncall.append("\n");

	QByteArray ba = serverdowncall.toLatin1();
	const char *tolist = ba.data();

	socket->write(tolist);

}


void myclianttest::gotomotherpath()
{


	QString motherpath= rootpath;
	motherpath.append("/..");
	setpath(motherpath);

}



void myclianttest::gotoservermotherpath()
{

	QString servermotherpath =serveraccesspath;
	servermotherpath.append("/..");

	list(servermotherpath);


}
//MessageBoxA(0,"download commond send","eee",0);


//QMessageBox msgBox;
//msgBox.setText(serverpathcall);
//msgBox.exec();