#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// �~�Ӥ����c�y�M�R�c����
class Base
{
public:
	Base()
	{
		cout << "Base���c�y���!" << endl;
	}

	~Base()
	{
		cout << "Base���R�c���!" << endl;
	}
};


class Son :public Base
{
public:
	Son()
	{
		cout << "Son���c�y���!" << endl;
	}

	~Son()
	{
		cout << "Son���R�c���!" << endl;
	}
};


void test01()
{
	//Base b;

	// �~�Ӥ����c�y�M�R�c���Ǧp�U:
	// ���c�y����, �b�c�y�l��, �R�c�����ǻP�c�y�����Ǭۤ�
	Son s;


}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

