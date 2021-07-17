#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> // �зǺ�k���Y���


// vector�e���s�񤺸m�ƾ�����

void myPrint(int val)
{
	cout << val << endl;

}


void test01()
{
	// �ЫؤF�@��vector�e��
	vector<int> v;

	// �V�e�������J�ƾ�
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// �q�L�|�N���X�ݮe�������ƾ�
	vector<int>::iterator itBegin = v.begin(); // �_�l�|�N��  ���V�e�����Ĥ@�Ӥ���
	vector<int>::iterator itEnd = v.end(); // �����|�N��  ���V�e�����̫�@�Ӥ������U�@�Ӧ�m

	// �Ĥ@�عM���覡
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}


	// �ĤG�عM���覡
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	// �ĤT�عM���覡
	for_each(v.begin(), v.end(), myPrint);



}




int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

