#include<iostream>
#include <string>
using namespace std;

//�w�q�ǥ͵��c��
struct student
{
	string name; //�m�W
	int age;	//�~��
	int score;	//����
};

//��X�ǥͫH�����
//1.�ȶǻ�
void printStudent1(struct student s ){
	s.age = 100;
	cout << "�l��Ƥ� �m�W: " << s.name << " �~��: " << s.age << " ����: " << s.score << endl;
}

//2.�a�}�ǻ�
void printStudent2(struct student * p) {
	p->age = 200;
	cout << "�l���2�� �m�W:" << (*p).name << " �~��: " << p->age << " ����: " << p->score << endl;
}

int main5() {

	//���c�鰵��ưѼ�
	//�N�ǥͶǤJ��@�ӰѼƤ�,��X�ǥͨ��W���Ҧ��T��

	//�Ыص��c���ܼ�
	struct student s;
	s.name = "�i�T";
	s.age = 20;
	s.score = 85;


	//printStudent1(s);
	printStudent2(&s);

	cout << "main��Ƥ���X �m�W: " << s.name << " �~��: " << s.age << " ����: " << s.score << endl;

	system("pause");

	return 0;
}