#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 動物類

class Animal
{
public:
	int m_Age;
};

// 利用虛繼承 解決菱形繼承的問題
// 繼承之前 加上關鍵字 virtual 變為虛繼承
//Animal類稱為 虛基類

// 羊類
class Sheep :virtual public Animal {};

// 駝類
class Tuo :virtual public Animal {};

// 羊駝類
class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;

	// 當菱形繼承, 兩個父類擁有相同數據, 需要加以作用域區分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "sr.m_Age = " << st.m_Age << endl;

	// 這份數據我們知道 只要有一分就可以, 菱形繼承導致數據有兩份, 資源浪費
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
