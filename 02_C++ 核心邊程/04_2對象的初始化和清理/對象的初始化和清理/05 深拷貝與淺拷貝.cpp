#include<iostream>
using namespace std;

// �`�����P�L����

class Person
{
public:
	Person()
	{
		cout << "Person���q�{�c�y��ƽե�" << endl;
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "Person�����Ѻc�y��ƽե�" << endl;
	}

	// �ۤv��{�����c�y��� �ѨM�L�����a�Ӫ����D
	Person(const Person &p)
	{
		cout << "Person �����c�y��ƽե�" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height; �sĶ���q�{��{�N�O�o��{���X
		// �`�����ާ@

		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		// �R�c�{����, �N��϶}�P�ƾڰ�����ާ@
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person���R�c��ƽե�" << endl;
	}

	int m_Age; //�~��
	int *m_Height; //����
};

void test01()
{
	Person p1(18, 160);
	cout << "p1���~�֬�:  " << p1.m_Age << "������:  " << *p1.m_Height << endl;

	Person p2(p1);

	cout << "p2���~�֬�:  " << p2.m_Age << "������:  " << *p2.m_Height << endl;

}


int main() {

	test01();

	system("pause");

	return 0;
}