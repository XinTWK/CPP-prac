#include<iostream>
#include<string>
using namespace std;

// 1.�Ыؾǥͼƾ����� : �ǥͥ]�� (�m�W, �~��, ����)
// �ۭq�q�ƾ�����, �@���������X�զ����@������
// �y�k struct �����W�� { �����C�� }
struct Student
{
	//�����C��

	//�m�W
	string name;
	//�~��
	int age;
	//����
	int score;

}s3;//���K�Ыص��c���ܽ�

// 2.�q�L�ǥ������Ыب���ǥ�


int main1() {

// 2.1 struct Student s1
	//struct ����O�i�H�ٲ�
	struct Student s1;
	//��s1�ݩʽ��,�q�L �X�ݵ��c���ܼƤ����ݩ�
	s1.name = "�i�T";
	s1.age = 18;
	s1.score = 100;

	cout << "�m�W: " << s1.name << " �~��: " << s1.age << " ����: " << s1.score << endl;


// 2.2 struct Student s2 = { ... }
	struct Student s2{"���|",19,80};
	cout << "�m�W: " << s2.name << " �~��: " << s2.age << " ����: " << s2.score << endl;

// 2.3 �b�w�q���c��ɶ��K�Ыص��c���ܶq

	s3.name = "����";
	s3.age = 20;
	s3.score = 60;
	cout << "�m�W: " << s3.name << " �~��: " << s3.age << " ����: " << s3.score << endl;


	system("pause");

	return 0;
}