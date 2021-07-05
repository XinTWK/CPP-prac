//#include<iostream>
//using namespace std;
//#include "point.h"
//#include "circle.h"
//
//
//// 點和圓關係案例
//
//// //點類
////class Point
////{
////public:
////	// 設置X
////	void setX(int x)
////	{
////		m_X = x;
////	}
////	// 獲取X
////	int getX()
////	{
////		return m_X;
////	}
////	// 設置Y
////	void setY(int y)
////	{
////		m_Y = y;
////	}
////	// 獲取Y
////	int getY()
////	{
////		return m_Y;
////	}
////
////private:
////	int m_X;
////	int m_Y;
////};
//
//
////// 圓類
////class Circle
////{
////public:
////
////	// 設置半徑
////	void setR(int r)
////	{
////		m_R = r;
////	}
////	// 獲取半徑
////	int getR()
////	{
////		return m_R;
////	}
////	// 設置圓心
////	void setCenter(Point center)
////	{
////		m_Center = center;
////	}
////	// 獲取圓心
////	Point getCenter()
////	{
////		return m_Center;
////	}
////private:
////	int m_R; // 半徑
////
////	// 再類中可以讓另一個類 作為本類中的成員
////	Point m_Center; // 圓心
////};
//
//// 判斷點和圓關係
//void isInCircle(Circle &c, Point &p)
//{
//	// 計算兩點之間距離 平方
//	int distance = 
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	// 計算半徑的平方
//	int rDistance = c.getR() * c.getR();
//
//	// 判斷關係
//	if (distance == rDistance)
//	{
//		cout << "點在圓上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "點在圓外" << endl;
//	}
//	else
//	{
//		cout << "點在圓內" << endl;
//	}
//
//
//
//}
//
//int main() {
//
//	// 創建圓
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	// 創建點
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	// 判斷關係
//	isInCircle(c, p);
//
//
//	system("pause");
//
//	return 0;
//}