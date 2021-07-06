#include <iostream>
using namespace std;
#include <string>

//設計一個學生類,屬性有姓名和學號
//可以給姓名和學號賦值, 可以顯示學生的姓名和學號

//設計學生類
class Student
{
public: //公共權限
	
	//類中的屬性和行為 統一稱為成員
	//屬性  成員屬性  成員變數
	//行為  成員函數  成員方法

	//屬性
	string m_name; //姓名
	int m_id;	//學號

	//行為
	//設定姓名
	void setName(string name)
	{
		m_name = name;
	}

	//設定ID
	void setID(int id)
	{
		m_id = id;
	}

	//顯示姓名和學號
	void ShowStudent()
	{
		cout << "name:  " << m_name << "  ID:  " << m_id << endl;
	}


};


int main()
{
	Student s1;
	//s1.m_name = "唐三";
	s1.setName("唐三");
	
	//s1.m_id = 19;
	s1.setID(19);
	
	s1.ShowStudent();


	system("pause");

	return 0;
}