#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

class Building;
class GoodGay
{
public:

	GoodGay();

	void visit();  // 讓visit函數可以訪問Building中私有成員
	void visit2();  // 讓visit2函數不可以訪問Building中私有成員


	Building * building;

};


class Building
{
	// 告訴編譯器 GoodGay類下的visit成員函數作為本類的好朋友, 可以訪問私有成員
	friend void GoodGay::visit();

public:
	Building();


public:

	string m_SittingRoom; // 客廳

private:

	string m_BedRoom; // 臥室
};

// 類外實現成員函數
Building::Building()
{
	m_SittingRoom = "客廳";
	m_BedRoom = "臥室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "visit 函數正在訪問:  " << building->m_SittingRoom << endl;
	cout << "visit 函數正在訪問:  " << building->m_BedRoom << endl;

}
void GoodGay::visit2()
{
	cout << "visit2 函數正在訪問:  " << building->m_SittingRoom << endl;
	//cout << "visit2 函數正在訪問:  " << building->m_BedRoom << endl;

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