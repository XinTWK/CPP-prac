#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Person���q�{�c�y��ƽե�" << endl;
	}

	Person(int a)
	{
		cout << "Person�����Ѻc�y��ƽե�" << endl;
	}

	Person(const Person & p)
	{
		cout << "Person�������c�y��ƽե�" << endl;
	}

	~Person()
	{
		cout << "Person���R�c��ƽե�" << endl;
	}

};

// malloc �M new ���ϧO?
// 1. malloc �M free �ݩ�w���         new �M delete �ݩ�B���
// 2. malloc��^���Ovoid *              new ��^���O���� �ƾ����������w
// 3. malloc�������Ofree				new �������Odelete
// 4. malloc���|�եκc�y���			new �|�եκc�y���
// 5. free ���|�եΪR�c���				delete �|�եΪR�c���
// 6. malloc�p����t���s�j�p			new ���ݭn

void test01()
{
	//Person p; // �b�̤W�Ыع�H

	// �b��ϳЫع�H
	Person * p1 = new Person;

	// ����
	delete p1;
}

// �`�N�ƶ�:	���n�Q��void *  ����new�X�Ӫ���H  ��]:  ���|����R�c���

void test02()
{
	void * p = new Person;

	delete p;
}

// �b��϶}�P�}�C

void test03()
{
	//malloc(sizeof(int) * 10); // C�y��
	int *pInt = new int[10];

	char * pChar = new char[64];

	// �p�G�b��h�}�P�ۭq�q�������}�C, �o�������������q�{�c�y���
	Person * persons = new Person[10] ;

	// �����ϰ}�C
	delete [] persons;
}

// �b�̤W�}�P�}�C���ɭ�, �i�H�S���q�{�c�y
void test04()
{
	Person pArr[3] = { Person(10),Person(10),Person(10) };
}

int main() {

	test03();

	system("pause");

	return EXIT_SUCCESS;
}