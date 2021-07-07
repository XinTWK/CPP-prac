#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include"MyArray.hpp"
#include<string>

void printIntArray(MyArray <int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}

}

void test01()
{
	MyArray <int>arr1(5);
	
	for (int i = 0; i < 5; i++)
	{
		// �Q�Χ����k�V�}�C�����J�ƾ�
		arr1.Push_Back(i);
	}
	cout << "arr1����X��:  " << endl;

	printIntArray(arr1);

	cout << "arr1���e�q��:  " << arr1.getCapacity() << endl;
	cout << "arr1���j�p��:  " << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);

	cout << "arr2����X��:  " << endl;

	printIntArray(arr2);

	// ���R
	arr2.Pop_Back();
	cout << "arr2 ���R��:  " << endl;
	cout << "arr2���e�q��:  " << arr2.getCapacity() << endl;
	cout << "arr2���j�p��:  " << arr2.getSize() << endl;

	MyArray<int>arr3(100);
	arr3 = arr1;
}

// ���զۭq�q�ƾ�����
class Person
{
public:

	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "�m�W:  " << arr[i].m_Name << " �~��:  " << arr[i].m_Age << endl;
	}
}


void test02()
{
	MyArray<Person>arr(10);

	Person p1("�]����", 999);
	Person p2("���H", 30);
	Person p3("�H�v", 20);
	Person p4("����", 25);
	Person p5("�v�˩�", 43);

	// �N�ƾڴ��J��}�C��
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	// ��X�}�C
	printPersonArray(arr);

	// ��X�e�q
	cout << "arr�e�q��:  " << arr.getCapacity() << endl;

	// ��X�j�p
	cout << "arr�j�p��:  " << arr.getSize() << endl;

}



int main() {

	//test01();
	test02();


	system("pause");

	return EXIT_SUCCESS;
}

