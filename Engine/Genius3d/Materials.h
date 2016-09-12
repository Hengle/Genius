

/*
Author : Xieliujian
Data : 2016.9.12
Description : ���ʼ�����
*/

#ifndef __Materials_h__
#define __Materials_h__

#include "Prerequest.h"
#include "Material.h"

NAMESPACEBEGIN(Genius)

class Materials
{
public:
	Materials();
	~Materials();

private:
	typedef std::vector<Material> MaterialVec;
	MaterialVec mMaterialVec;
};

NAMESPACEEND

#endif