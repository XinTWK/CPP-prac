#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��ҼҦ�: �q�L�@�����u��ϥΰߤ@���@�ӹ�H


// �D�u��
class Chairman
{
public:
	// 3. �N�ߤ@�����w �p���ƫ�, ���Ѥ��@����f �ܬ��uŪ���A
	static Chairman * getInstance()
	{
		return singleMan;
	}

	// 1. �N�q�{�c�y���  �p����
private:
	Chairman() 
	{
		cout << "ChairMan�c�y��ƽե�" << endl;
	}

	// 4. �N�����c�y��� �p����
	Chairman(const Chairman&){}

private:
	// 2. �u�n����@�ӹ�H�����w�Y�i, �o�ӫ��w�i�H���V�ߤ@����H
	static Chairman * singleMan;


};

 Chairman * Chairman::singleMan = new Chairman;


void test01()
{
	//Chairman c1;
	//Chairman c2;
	//Chairman * c3 = new Chairman;

	//Chairman * c1 = Chairman::singleMan;
	//Chairman * c2 = Chairman::singleMan;
	//Chairman::singleMan = NULL;

	Chairman * c1 = Chairman::getInstance();
	Chairman * c2 = Chairman::getInstance();



	if (c1 == c2)
	{
		cout << "c1 == c2" << endl;
	}
	else
	{
		cout << "c1 != c2" << endl;
	}

	//Chairman * c3 = new Chairman(*c1);
	//if (c1 == c3)
	//{
	//	cout << "c1 == c3" << endl;
	//}
	//else
	//{
	//	cout << "c1 != c3" << endl;
	//}

}


int main() {

	cout << "Main��ƽե�" << endl;

	test01();

	system("pause");

	return EXIT_SUCCESS;
}