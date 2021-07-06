#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 單例模式: 通過一個類只能使用唯一的一個對象


// 主席類
class Chairman
{
public:
	// 3. 將唯一的指針 私有化後, 提供公共的街口 變為只讀狀態
	static Chairman * getInstance()
	{
		return singleMan;
	}

	// 1. 將默認構造函數  私有化
private:
	Chairman() 
	{
		cout << "ChairMan構造函數調用" << endl;
	}

	// 4. 將拷貝構造函數 私有化
	Chairman(const Chairman&){}

private:
	// 2. 只要拿到一個對象的指針即可, 這個指針可以指向唯一的對象
	static Chairman * singleMan;


};

 Chairman * Chairman::singleMan = new Chairman;


void test01()
{
	//Chairman c1;
	//Chairman c2;
	//Chairman * c3 = new Chairman;

	//Chairman * c1 = Chairman::singleMan;
	//Chairman * c2 = Chairman::singleMan;
	//Chairman::singleMan = NULL;

	Chairman * c1 = Chairman::getInstance();
	Chairman * c2 = Chairman::getInstance();



	if (c1 == c2)
	{
		cout << "c1 == c2" << endl;
	}
	else
	{
		cout << "c1 != c2" << endl;
	}

	//Chairman * c3 = new Chairman(*c1);
	//if (c1 == c3)
	//{
	//	cout << "c1 == c3" << endl;
	//}
	//else
	//{
	//	cout << "c1 != c3" << endl;
	//}

}


int main() {

	cout << "Main函數調用" << endl;

	test01();

	system("pause");

	return EXIT_SUCCESS;
}