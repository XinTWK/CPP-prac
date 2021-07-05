#include<iostream>
using namespace std;

// 1.構造函數的分類及調用
// 分類
// 按照參數分類  無參構造(默認構造) 和 有參構造
// 按照類型分類  普通構造 和 拷貝構造 

class Person
{
public:
	//構造函數
	Person()
	{
		cout << "Person的無參構造函數應用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person的有參構造函數應用" << endl;
	}
	// 拷貝構造函數
	Person(const Person &p)
	{
		// 將傳入的人身上的所有屬性, 拷貝到我身上
		age = p.age;
		cout << "Person的拷貝構造函數應用" << endl;
	}

	~Person()
	{
		cout << "Person的析構函數調用" << endl;
	}

	int age;
};

// 調用
void test01()
{
	// 1.括號法
	//Person p; // 默認構造函數調用
	//Person p2(10); //有參構造函數
	//Person p3(p2); //拷貝構造函數

	// 注意事項 1
	// 調用默認構造函數時候, 不要加()
	// 因為下面這行, 編譯器會認為是一個函數的聲明, 不會認為在創建對象
	//Person p1();

	//cout << "p2的年齡為: " << p2.age << endl;
	//cout << "p3的年齡為: " << p2.age << endl;

	// 2.顯示法
	//Person p1;
	//Person p2 = Person(10); // 有參構造
	//Person p3 = Person(p2); // 拷貝構造

	//Person(10); // 匿名對象 特點: 當前行執行結束後, 系統會立即回收掉匿名對象
	//cout << "aaaaa" << endl;

	// 注意事項 2
	// 不要利用拷貝構造函數 初始化匿名對象 編譯器會認為 Person (p3) === Person p3; 對象聲明
	//Person(p3);

	// 3.隱式轉換法
	Person p4 = 10; // 相當於 寫了 Person p4 = Person(10);  有參構造
	Person p5 = p4; // 拷貝構造

}


int main() {
	test01();


	system("pause");

	return 0;
}