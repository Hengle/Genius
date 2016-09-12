
/*
Author : Xieliujian
Data : 2016.9.11
Description : ��Ⱦϵͳ��D3D9ʵ��
*/

#ifndef _D3D9RenderSystem_h_
#define _D3D9RenderSystem_h_

#include "D3D9Prerequest.h"
#include "RenderSystem.h"

NAMESPACEBEGIN(Genius)

class D3D9RenderSystem : public RenderSystem
{
public:
	D3D9RenderSystem();
	~D3D9RenderSystem();

	// ��������
	virtual void CreateDevice(int hwnd, int width, int height);

	// ֡��Ⱦ��ʼ
	virtual void BeginFrame();

	// ֡��Ⱦ����
	virtual void EndFrame();

	// ��Ⱦ
	virtual void Render();

	// �����ӿ�
	virtual void SetViewport(int left, int top, int width, int height);

private:
	IDirect3D9 *mpD3D;
	IDirect3DDevice9 *mpDevice;
	D3DVIEWPORT9 mViewport;
	D3DPRESENT_PARAMETERS mD3Dpp;
};

NAMESPACEEND

#endif