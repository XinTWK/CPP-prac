#include <iostream>
using namespace std;
//time�t�ήɶ��Y���
#include <ctime>


int main2() {

	//�K�[�H���ƺؤl �@�ΧQ�η�e�t�ήɶ��ͦ��H����,����C���H���Ƴ��@��
	srand((unsigned int)time(NULL));

	//1.�t�Υͦ��H����
	int num =  rand() % 100 + 1; //�ͦ� 0 +1  ~ 99 +1 �H����
	//cout << num << endl;

	//2.���a�i��q��
	int val = 0; //���a��J���ƾ�

	while (1)
	{
		cin >> val;

		//3.�P�_���a���q��

		//�q�� ���ܲq�����G �L�j�Ϊ̹L�p ���s��^�ĤG�B
		if (val > num) {
			cout << "�q���L�j" << endl;
		}
		else if (val < num) {
			cout << "�q���L�p" << endl;
		}
		else {
			cout << "���߱z�q��F" << endl;
			break;
		}
	}

	
	//�q�� �h�X�C��
	//�q�� ���ܲq�����G �L�j�ιL�p ���s��^��2�B



	system("pause");

	return 0;
}