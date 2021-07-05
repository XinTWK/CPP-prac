//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//
//// 類做友元
//class Building;
//
//class GoodGay
//{
//public:
//
//	GoodGay();
//
//	void visit(); // 參觀函數 訪問Building中的屬性
//
//	Building * building;
//
//};
//
//class Building
//{
//	// GoodGay類是本類的好朋友, 可以訪問本類中私有成員
//	friend class GoodGay;
//
//public:
//	Building();
//
//
//public:
//	string m_SittingRoom; // 客廳
//
//private:
//	string m_BedRoom; // 臥室
//
//};
//
//
//// 類外寫成員函數
//Building::Building()
//{
//	m_SittingRoom = "客廳";
//	m_BedRoom = "臥室";
//
//}
//
//GoodGay::GoodGay()
//{
//	// 創建建築物對象
//	building = new Building;
//}
//
//
//void GoodGay::visit()
//{
//	cout << "好基友類正在訪問:  " << building->m_SittingRoom << endl;
//
//	cout << "好基友類正在訪問:  " << building->m_BedRoom << endl;
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