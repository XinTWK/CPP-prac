//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// ��R�c�M�µ�R�c
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal�c�y��ƽե�" << endl;
//	}
//
//	// �Q�ε�R�c�i�H�ѨM �������w����l����H�ɤ����b�����D
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��R�c��ƽե�" << endl;
//	//}
//	
//	// �µ�R�c �ݭn�n���]�ݭn��{
//	// ���F�µ�R�c����, �o�����]�ݩ��H��, �L�k��Ҥƹ�H
//	virtual ~Animal() = 0;
//
//	// �µ���
//	virtual void speak() = 0;
//
//};
//
//Animal:: ~Animal()
//{
//	cout << "Animal�µ�R�c��ƽե�" << endl;
//}
//
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat�c�y��ƽե�" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "�p�ߦb����" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat�R�c��ƽե�" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string *m_Name;
//
//};
//
//void test01()
//{
//	Animal * animal = new Cat("Tom");
//	animal->speak();
//	// �������w�b�R�c�ɭ� ���|�եΤl�����R�c���, �ɭP�l���p�G������ݩ�, �X�{�O����y��
//	delete animal;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
