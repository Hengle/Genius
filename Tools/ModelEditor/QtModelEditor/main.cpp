
#include "qtmodeleditor.h"
#include <QtWidgets/QApplication>
#include <QtGui>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	// �����win7��������ʾΪ���������
	QTextCodec::setCodecForLocale(QTextCodec::codecForName("system"));

	QtModelEditor w;
	w.show();

	return a.exec();
}
