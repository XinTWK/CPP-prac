#include "circle.h"



// 設置半徑
void Circle::setR(int r)
{
	m_R = r;
}
// 獲取半徑
int Circle::getR()
{
	return m_R;
}
// 設置圓心
void Circle::setCenter(Point center)
{
	m_Center = center;
}
// 獲取圓心
Point Circle::getCenter()
{
	return m_Center;
}
