//#include<iostream>
//using namespace std;
//
//// �c�y��ƪ��եγW�h
//// 1. �Ыؤ@����, C++�sĶ���|���C�������K�[�ܤ�3�Ө��
//// �q�{�c�y   (�Ź�{)
//// �R�c���   (�Ź�{)
//// �����c�y	  (�ȫ���)
//
//
//
//// 2. 
//// �p�G�ڭ̼g�F���Ѻc�y���, �sĶ���N���A�����q�{�c�y, �̵M���ѫ����c�y
//// �p�G�ڭ̼g�F�����c�y���, �sĶ���N���A���Ѩ�L���q�c�y��ƤF
//class Person
//{
//public:
//
//	Person()
//	{
//		cout << "Person���q�{�c�y��ƽե�" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "Person�����Ѻc�y��ƽե�" << endl;
//		m_Age = age;
//	}
//
//	Person(const Person & p)
//	{
//		cout << "Person�������c�y��ƽե�" << endl;
//		m_Age = p.m_Age;
//	}
//
//	~Person()
//	{
//		cout << "Person���R�c��ƽե�" << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//
//	Person p2(p);
//
//	cout << "p2���~�֬�:  " << p2.m_Age << endl;
//}
//
//void test02()
//{
//	Person p(28);
//
//	Person p2(p);
//
//}
//
//
//int main() {
//
//	test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}