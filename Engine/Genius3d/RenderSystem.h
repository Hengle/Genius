
/*
Author : Xieliujian
Data : 2016.9.11
Description : ��Ⱦϵͳ�Ļ���
*/

#ifndef _RenderSystem_h_
#define _RenderSystem_h_

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
};

#endif