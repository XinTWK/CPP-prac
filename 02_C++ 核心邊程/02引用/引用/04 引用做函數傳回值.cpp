#include <iostream>
using namespace std;

//�ޥΰ���ƪ��Ǧ^��
//1. ���n��^�����ܼƪ��ޥ�
int& test01()
{
	int a = 10; //�����ܼƦs��b�|�Ϥ��� �̰�
	return a;
}

//2.��ƪ��եΥi�H������
int& test02()
{
	static int a = 10; //�R�A�ܼ�, �s��b������, �����ϤW���ƾڦb�{��������t������
	return a;
}




int main()
{

	//int &ref = test01();

	//cout << "ref = " << ref << endl; //�Ĥ@�����G���T,�O�]���sĶ�����F�O�d
	//cout << "ref = " << ref << endl; //�ĤG�����G���~,�]��a�����s�w�g����

	int &ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000; //�p�G��ƪ���^�ȬO�ޥ�,�o�Ө�ƽեΥi�H��������

	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");

	return 0;

}