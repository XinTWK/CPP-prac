#pragma once
#include<iostream>
using namespace std;
#include "point.h"

// 圓類
class Circle
{
public:

	// 設置半徑
	void setR(int r);

	// 獲取半徑
	int getR();

	// 設置圓心
	void setCenter(Point center);

	// 獲取圓心
	Point getCenter();

private:
	int m_R; // 半徑

			 // 再類中可以讓另一個類 作為本類中的成員
	Point m_Center; // 圓心
};