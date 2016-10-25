

/*
Author : Xieliujian
Data : 2016.9.12
Description : �༭������
*/

#ifndef __GeniusEditor_h__
#define __GeniusEditor_h__

#include "Prerequest.h"
#include "Singleton.h"
#include "D3D9RenderSystem.h"

using namespace Genius;

NAMESPACEBEGIN(Editor)

class BaseEditor : public Singleton<BaseEditor>
{
public:
	BaseEditor();
	~BaseEditor();

	// ����
	void Create(int hwnd);

	// ��Ⱦ
	void Render();
protected:
	int mhWnd;
	RenderSystem *mRenderSystem;
};

NAMESPACEEND

#endif