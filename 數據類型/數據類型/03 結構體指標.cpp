#include <iostream>
#include <string>
using namespace std;

//���c�����
//�w�q�ǥ͵��c��
struct student
{
	string neame; //�m�W
	int age;      //�~��
	int score;    //����
};

int main3() {

	// 1.�Ыؾǥ͵��c���ܼ�
	student s = { "�i�T",18,100 };
	
	// 2.�q�L���Ы��V���c���ܼ�
	student * p = &s;

	// 3.�q�L���гX�ݵ��c���ܼƤ����ƾ�
	// �q�L���c����� �X�ݵ��c�餤���ݩ�, �ݭn�Q�� ' -> '
	cout << "�m�W: " << p->neame << " �~��: " << p->age << " ����: " << p->score << endl;



	system("pause");

	return 0;
}