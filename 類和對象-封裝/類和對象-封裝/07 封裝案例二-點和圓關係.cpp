//#include<iostream>
//using namespace std;
//#include "point.h"
//#include "circle.h"
//
//
//// �I�M�����Y�ר�
//
//// //�I��
////class Point
////{
////public:
////	// �]�mX
////	void setX(int x)
////	{
////		m_X = x;
////	}
////	// ���X
////	int getX()
////	{
////		return m_X;
////	}
////	// �]�mY
////	void setY(int y)
////	{
////		m_Y = y;
////	}
////	// ���Y
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
////// ����
////class Circle
////{
////public:
////
////	// �]�m�b�|
////	void setR(int r)
////	{
////		m_R = r;
////	}
////	// ����b�|
////	int getR()
////	{
////		return m_R;
////	}
////	// �]�m���
////	void setCenter(Point center)
////	{
////		m_Center = center;
////	}
////	// ������
////	Point getCenter()
////	{
////		return m_Center;
////	}
////private:
////	int m_R; // �b�|
////
////	// �A�����i�H���t�@���� �@��������������
////	Point m_Center; // ���
////};
//
//// �P�_�I�M�����Y
//void isInCircle(Circle &c, Point &p)
//{
//	// �p����I�����Z�� ����
//	int distance = 
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	// �p��b�|������
//	int rDistance = c.getR() * c.getR();
//
//	// �P�_���Y
//	if (distance == rDistance)
//	{
//		cout << "�I�b��W" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "�I�b��~" << endl;
//	}
//	else
//	{
//		cout << "�I�b�ꤺ" << endl;
//	}
//
//
//
//}
//
//int main() {
//
//	// �Ыض�
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	// �Ы��I
//	Point p;
//	p.setX(10);
//	p.setY(10);
//
//	// �P�_���Y
//	isInCircle(c, p);
//
//
//	system("pause");
//
//	return 0;
//}