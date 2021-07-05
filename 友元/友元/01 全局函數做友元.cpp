//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// 建築物類
//class Building
//{
//	// goodGay全局函數是 Building好朋友, 可以訪問Building中私有成員
//	friend void goodGay(Building *building);
//public:
//	Building()
//	{
//		m_SittingRomm = "客廳";
//		m_BedRoom = "臥室";
//	}
//
//public:
//	string m_SittingRomm; // 客廳
//
//private:
//	string m_BedRoom; // 臥室
//};
//
//
//// 全局函數
//void goodGay(Building *building) 
//{
//	cout << "好基友全局函數  正在訪問 : " << building->m_SittingRomm << endl;
//
//	cout << "好基友全局函數  正在訪問 : " << building->m_BedRoom << endl;
//
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//
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