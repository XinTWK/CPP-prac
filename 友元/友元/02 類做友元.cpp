//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//
//// �����ͤ�
//class Building;
//
//class GoodGay
//{
//public:
//
//	GoodGay();
//
//	void visit(); // ���[��� �X��Building�����ݩ�
//
//	Building * building;
//
//};
//
//class Building
//{
//	// GoodGay���O�������n�B��, �i�H�X�ݥ������p������
//	friend class GoodGay;
//
//public:
//	Building();
//
//
//public:
//	string m_SittingRoom; // ���U
//
//private:
//	string m_BedRoom; // �׫�
//
//};
//
//
//// ���~�g�������
//Building::Building()
//{
//	m_SittingRoom = "���U";
//	m_BedRoom = "�׫�";
//
//}
//
//GoodGay::GoodGay()
//{
//	// �Ыثؿv����H
//	building = new Building;
//}
//
//
//void GoodGay::visit()
//{
//	cout << "�n��������b�X��:  " << building->m_SittingRoom << endl;
//
//	cout << "�n��������b�X��:  " << building->m_BedRoom << endl;
//
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}