//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this���w���V �Q�եΪ�������Ʃ��ݪ���H
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//
//		// this���Vp2�����w, ��*this���V���N�Op2�o�ӹ�H����
//		return *this;
//	}
//
//	int age;
//};
//
//// 1. �ѨM�W�ٽĬ�
//void test01()
//{
//	Person p1(18);
//	cout << "p1���~�֬�:  " << p1.age << endl;
//}
//
//
//// 2. ��^��H������ *this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	// �즡�s�{��Q
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "P2���~�֬�:  " << p2.age << endl;
//}
//
//
//
//int main() {
//
//	//test01();
//
//	test02();
//
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}