#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class myException
{
public:
	myException()
	{
		cout << "myException���c�y���" << endl;
	}
	myException(const myException & e)
	{
		cout << "myException�������c�y" << endl;
	}
	~myException()
	{
		cout << "myException���R�c���" << endl;
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

	// �ߥX: throw myException();      ����  catch (myException e)  �եΫ����c�y���  ���ͷs����H
	// �ߥX: throw myException();      ����  catch (myException &e) ����
	// �ߥX: throw myException();      ����  catch (myException *e) ���e���񲧱`����H
	// �ߥX: throw new myException();  ����  catch (myException *e)	�M�ޥΪ��ĪG�@��,���O�n�������
	catch (myException *e)
	{
		cout << "�ڪ����`����" << endl;
		delete e;
	}
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
