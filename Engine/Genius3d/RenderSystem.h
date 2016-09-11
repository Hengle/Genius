
/*
Author : Xieliujian
Data : 2016.9.11
Description : ��Ⱦϵͳ�Ļ���
*/

#ifndef _RenderSystem_h_
#define _RenderSystem_h_

#include "Prerequest.h"

NAMESPACEBEGIN(Genius)

class RenderSystem
{
public:
	RenderSystem();
	~RenderSystem();

	// ֡��Ⱦ��ʼ
	virtual void BeginFrame() = 0;

	// ֡��Ⱦ����
	virtual void EndFrame() = 0;

	// ��Ⱦ
	virtual void Render() = 0;

	// �����ӿ�
	virtual void SetViewport(int left, int top, int width, int height) = 0;
};

NAMESPACEEND

#endif