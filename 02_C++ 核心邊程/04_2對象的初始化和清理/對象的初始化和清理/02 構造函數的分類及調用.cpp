#include<iostream>
using namespace std;

// 1.�c�y��ƪ������νե�
// ����
// ���ӰѼƤ���  �L�Ѻc�y(�q�{�c�y) �M ���Ѻc�y
// ������������  ���q�c�y �M �����c�y 

class Person
{
public:
	//�c�y���
	Person()
	{
		cout << "Person���L�Ѻc�y�������" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person�����Ѻc�y�������" << endl;
	}
	// �����c�y���
	Person(const Person &p)
	{
		// �N�ǤJ���H���W���Ҧ��ݩ�, ������ڨ��W
		age = p.age;
		cout << "Person�������c�y�������" << endl;
	}

	~Person()
	{
		cout << "Person���R�c��ƽե�" << endl;
	}

	int age;
};

// �ե�
void test01()
{
	// 1.�A���k
	//Person p; // �q�{�c�y��ƽե�
	//Person p2(10); //���Ѻc�y���
	//Person p3(p2); //�����c�y���

	// �`�N�ƶ� 1
	// �ե��q�{�c�y��Ʈɭ�, ���n�[()
	// �]���U���o��, �sĶ���|�{���O�@�Ө�ƪ��n��, ���|�{���b�Ыع�H
	//Person p1();

	//cout << "p2���~�֬�: " << p2.age << endl;
	//cout << "p3���~�֬�: " << p2.age << endl;

	// 2.��ܪk
	//Person p1;
	//Person p2 = Person(10); // ���Ѻc�y
	//Person p3 = Person(p2); // �����c�y

	//Person(10); // �ΦW��H �S�I: ��e����浲����, �t�η|�ߧY�^�����ΦW��H
	//cout << "aaaaa" << endl;

	// �`�N�ƶ� 2
	// ���n�Q�Ϋ����c�y��� ��l�ưΦW��H �sĶ���|�{�� Person (p3) === Person p3; ��H�n��
	//Person(p3);

	// 3.�����ഫ�k
	Person p4 = 10; // �۷�� �g�F Person p4 = Person(10);  ���Ѻc�y
	Person p5 = p4; // �����c�y

}


int main() {
	test01();


	system("pause");

	return 0;
}