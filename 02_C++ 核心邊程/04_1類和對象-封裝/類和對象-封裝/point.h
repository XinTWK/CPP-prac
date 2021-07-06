#pragma once
#include <iostream>
using namespace std;

//點類
class Point
{
public:
	// 設置X
	void setX(int x);

	// 獲取X
	int getX();

	// 設置Y
	void setY(int y);

	// 獲取Y
	int getY();


private:
	int m_X;
	int m_Y;
};