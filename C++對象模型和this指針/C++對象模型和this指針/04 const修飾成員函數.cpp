//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
//// �`���
//class Person
//{
//public:
//
//	// this���w������ �O���w�`�q  ���w�����V�O���i�H�ק諸
//	// Person * const this;
//	// �b������ƫ᭱�[const, �׹����Othis���w, �����w���V���Ȥ]���i�H�ק�
//	void showPerson() const
//	{
//		this->m_B = 100;
//		//this->m_A = 100;
//		//this = NULL; // this���w���i�H�ק���w�����V��
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B; // �S���ܶq, �Y�Ϧb�`��Ƥ�, �]�i�H�ק�o�ӭ�,�[����rmutable
//};
//
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
//// �`��H
//
//void test02()
//{
//	const Person p; // �b��V�e�[const, �ܬ��`��H
//	//p.m_A = 100;
//	p.m_B = 100; // m_B�O�S���, �b�`��H�U�]�i�H�ק�
//
//	// �`��H�u��եα`���
//	p.showPerson();
//	//p.func();  //�`��H ���i�H�եδ��q�������, �]�����q������ƥi�H�ק��ݩ�
//}
//
//
//
//
//int main() {
//
//
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}