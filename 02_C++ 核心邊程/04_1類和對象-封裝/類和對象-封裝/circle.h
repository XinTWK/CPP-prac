#pragma once
#include<iostream>
using namespace std;
#include "point.h"

// ����
class Circle
{
public:

	// �]�m�b�|
	void setR(int r);

	// ����b�|
	int getR();

	// �]�m���
	void setCenter(Point center);

	// ������
	Point getCenter();

private:
	int m_R; // �b�|

			 // �A�����i�H���t�@���� �@��������������
	Point m_Center; // ���
};