#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �ʪ���

class Animal
{
public:
	int m_Age;
};

// �Q�ε��~�� �ѨM�٧��~�Ӫ����D
// �~�Ӥ��e �[�W����r virtual �ܬ����~��
//Animal���٬� �����

// ����
class Sheep :virtual public Animal {};

// �m��
class Tuo :virtual public Animal {};

// �Ͼm��
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	// ��٧��~��, ��Ӥ����֦��ۦP�ƾ�, �ݭn�[�H�@�ΰ�Ϥ�
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "sr.m_Age = " << st.m_Age << endl;

	// �o���ƾڧڭ̪��D �u�n���@���N�i�H, �٧��~�ӾɭP�ƾڦ����, �귽���O
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
