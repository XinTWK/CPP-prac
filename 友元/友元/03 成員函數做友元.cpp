#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGay
{
public:

	GoodGay();

	void visit();  // ��visit��ƥi�H�X��Building���p������
	void visit2();  // ��visit2��Ƥ��i�H�X��Building���p������


	Building * building;

};


class Building
{
	// �i�D�sĶ�� GoodGay���U��visit������Ƨ@���������n�B��, �i�H�X�ݨp������
	friend void GoodGay::visit();

public:
	Building();


public:

	string m_SittingRoom; // ���U

private:

	string m_BedRoom; // �׫�
};

// ���~��{�������
Building::Building()
{
	m_SittingRoom = "���U";
	m_BedRoom = "�׫�";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit ��ƥ��b�X��:  " << building->m_SittingRoom << endl;
	cout << "visit ��ƥ��b�X��:  " << building->m_BedRoom << endl;

}
void GoodGay::visit2()
{
	cout << "visit2 ��ƥ��b�X��:  " << building->m_SittingRoom << endl;
	//cout << "visit2 ��ƥ��b�X��:  " << building->m_BedRoom << endl;

}


void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();

}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}