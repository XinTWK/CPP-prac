#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// オ簿笲衡才更

class Person
{

	friend ostream& operator<<(ostream &out, Person &p);

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	// ノΘㄧ计更 オ簿笲衡才  p.operator<<(cout)  虏てセ p << cout
	// ぃ穦ノΘㄧ计更<<笲衡才, 礚猭龟瞷 coutオ凹
	//void operator<<(Person &p)
	//{

	//}

	int m_A;
	int m_B;
};

// ノЫㄧ计更オ簿笲衡才
ostream& operator<<(ostream &out, Person &p) // セ借 operator<< (cout,p)
{
	out << "m_A = " << p.m_A << "  m_B = " << p.m_B;
	return out;
}


void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << " hello world" << endl;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}