#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class myException
{
public:
	myException()
	{
		cout << "myException的構造函數" << endl;
	}
	myException(const myException & e)
	{
		cout << "myException的拷貝構造" << endl;
	}
	~myException()
	{
		cout << "myException的析構函數" << endl;
	}

};


void func()
{
	throw new myException();
}

void test01()
{
	try
	{
		func();
	}

	// 拋出: throw myException();      接收  catch (myException e)  調用拷貝構造函數  產生新的對象
	// 拋出: throw myException();      接收  catch (myException &e) 推薦
	// 拋出: throw myException();      接收  catch (myException *e) 提前釋放異常的對象
	// 拋出: throw new myException();  接收  catch (myException *e)	和引用的效果一樣,但是要手動釋放
	catch (myException *e)
	{
		cout << "我的異常捕獲" << endl;
		delete e;
	}
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
