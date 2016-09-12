

#include "QD3D9Widget.h"

QD3D9Widget::QD3D9Widget(QWidget *parent)
{
	QWidget::setAttribute(Qt::WA_PaintOnScreen); // ����DX��Ⱦ ...
	setFocusPolicy(Qt::WheelFocus); // ������ʱ�� ...
	setMouseTracking(true); // ��������ƶ� ...

	mTimer.setInterval(0);
	QObject::connect(&mTimer, SIGNAL(timeout()), this, SLOT(Idle()));
	mTimer.start();
}

QD3D9Widget::~QD3D9Widget()
{

}

void QD3D9Widget::Idle()
{
	RenderScene();
}