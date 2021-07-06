#include<iostream>
using namespace std;

// 深拷貝與淺拷貝

class Person
{
public:
	Person()
	{
		cout << "Person的默認構造函數調用" << endl;
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person的有參構造函數調用" << endl;
	}

	// 自己實現拷貝構造函數 解決淺拷貝帶來的問題
	Person(const Person &p)
	{
		cout << "Person 拷貝構造函數調用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height; 編譯器默認實現就是這行程式碼
		// 深拷貝操作

		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		// 析構程式瑪, 將堆區開闢數據做釋放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析構函數調用" << endl;
	}

	int m_Age; //年齡
	int *m_Height; //身高
};

void test01()
{
	Person p1(18, 160);
	cout << "p1的年齡為:  " << p1.m_Age << "身高為:  " << *p1.m_Height << endl;

	Person p2(p1);

	cout << "p2的年齡為:  " << p2.m_Age << "身高為:  " << *p2.m_Height << endl;

}


int main() {

	test01();

	system("pause");

	return 0;
}