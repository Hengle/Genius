
/*
Author : Xieliujian
Data : 2016.9.12
Description : ������
*/

#ifndef __Vector_h__
#define __Vector_h__

#include "Prerequest.h"

NAMESPACEBEGIN(Genius)

class Vector
{
public:
	Vector();
	Vector(float x, float y, float z);
	Vector(const Vector& v);
	~Vector();

	// ��λ��
	void Normalize();

	// ����
	float Length();

	// ���
	float Dot(const Vector& vec) const;

	// ���
	Vector Cross(const Vector& rkVector) const;

	Vector& operator -();
	Vector operator + (const Vector &v) const;
	Vector operator - (const Vector &v) const;
	Vector& operator = (const Vector &v);
	Vector& operator += (const Vector &v);
	Vector& operator -= (const Vector &v);
	Vector operator * (float d) const;
	Vector operator / (float d) const;

	float x;
	float y;
	float z;
};

NAMESPACEEND

#endif