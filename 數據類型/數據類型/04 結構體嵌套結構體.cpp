#include <iostream>
#include <string>
using namespace std;

//�w�q�ǥ͵��c��
struct student
{
	string name;	//�m�W
	int age;		//�~��
	int score;		//����
};


//�w�q�Ѯv���c��
struct teacher
{
	int id;				//�Юv�s��
	string name;		//�Юv�m�W
	int age;			//�~��
	struct student stu; //���ɪ��ǥ�
};


int main4() {

	//���c��O�M���c��
	//�ЫئѮv
	teacher t;
	t.id = 10000;
	t.name = "�Ѥ�";
	t.age = 50;
	t.stu.name = "�p��";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "�Ѯv�m�W: " << t.name << " �Ѯv�s��: " << t.id << " �Ѯv�~��: " << t.age
		<< " �Ѯv���ɪ��ǥͩm�W: " << t.stu.name << " �ǥͦ~��:" << t.stu.age
		<< " �ǥͤ���: " << t.stu.score << endl;

	system("pause");

	return 0;
}