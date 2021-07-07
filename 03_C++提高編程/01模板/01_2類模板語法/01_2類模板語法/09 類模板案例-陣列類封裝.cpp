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
		// 利用尾插法向陣列中插入數據
		arr1.Push_Back(i);
	}
	cout << "arr1的輸出為:  " << endl;

	printIntArray(arr1);

	cout << "arr1的容量為:  " << arr1.getCapacity() << endl;
	cout << "arr1的大小為:  " << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);

	cout << "arr2的輸出為:  " << endl;

	printIntArray(arr2);

	// 尾刪
	arr2.Pop_Back();
	cout << "arr2 尾刪後:  " << endl;
	cout << "arr2的容量為:  " << arr2.getCapacity() << endl;
	cout << "arr2的大小為:  " << arr2.getSize() << endl;

	MyArray<int>arr3(100);
	arr3 = arr1;
}

// 測試自訂義數據類型
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
		cout << "姓名:  " << arr[i].m_Name << " 年齡:  " << arr[i].m_Age << endl;
	}
}


void test02()
{
	MyArray<Person>arr(10);

	Person p1("孫悟空", 999);
	Person p2("韓信", 30);
	Person p3("妲己", 20);
	Person p4("趙雲", 25);
	Person p5("史瓦拉", 43);

	// 將數據插入到陣列中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	// 輸出陣列
	printPersonArray(arr);

	// 輸出容量
	cout << "arr容量為:  " << arr.getCapacity() << endl;

	// 輸出大小
	cout << "arr大小為:  " << arr.getSize() << endl;

}



int main() {

	//test01();
	test02();


	system("pause");

	return EXIT_SUCCESS;
}

