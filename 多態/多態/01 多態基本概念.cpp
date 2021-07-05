#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �h�A

// �ʪ���
class Animal
{
public:
	// ����
	virtual void speak()
	{
		cout << "�ʪ��b����" << endl;
	}
};


// ����
class Cat :public Animal
{
public:
	// ���g  ��ƪ�^������  ��ƦW  �ѼƦC��  �����ۦP
	void speak()
	{
		cout << "�p�ߦb����" << endl;
	}
};

// ����
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "�p���b����" << endl;
	}
};

// ���满�ܪ����
// �a�}���j�w  �b�sĶ���q�T�w��Ʃw�}
// �p�G�Q�������߻���, ����o�Ө�Ʀa�}�N���ണ�e�j�w, �ݭn�b�B�涥�q�i��j�w, �a�}�߸j�w

// �ʺA�h�A��������
// 1. ���~�����Y
// 2. �l�����g����������

// �ʺA�h�A�ϥ�
// ���������w�Ϊ̤ޥ� ���V�l����H

void doSpeak(Animal &animal)  // Animal & animal = cat;
{
	animal.speak(); 
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;

}


int main() {

	//test01();

	test02();

	system("pause");

	return EXIT_SUCCESS;
}
