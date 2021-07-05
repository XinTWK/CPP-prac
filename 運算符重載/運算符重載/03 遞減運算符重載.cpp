//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//class MyIntenger
//{
//	friend ostream& operator<< (ostream& cout, MyIntenger myint);
//public:
//	MyIntenger()
//	{
//		m_Num = 5;
//	}
//
//	MyIntenger operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	MyIntenger operator--(int)
//	{
//		MyIntenger temp = *this;
//		m_Num--;
//		return temp;
//	}
//
//
//private:
//	int m_Num;
//
//};
//
//
//ostream& operator<< (ostream& cout, MyIntenger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//
//void test01()
//{
//	MyIntenger myint;
//	cout << myint-- << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyIntenger myint;
//	cout << --myint << endl;
//	cout << myint << endl;
//}
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
