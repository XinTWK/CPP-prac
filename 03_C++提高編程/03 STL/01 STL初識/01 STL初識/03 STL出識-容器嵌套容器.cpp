#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>

// �e���O�M�e��
void test01()
{
	vector<vector<int>>v;

	// �Ыؤp�e��
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	// �V�p�e���K�[�ƾ�
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	// �N�p�e�����J��j�e����
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	// �q�L�j�e��, ��Ҧ��ƾڹM���@�M
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// (*it) ----�e�� vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

