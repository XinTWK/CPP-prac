#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 類模板與繼承

template<class T>
class Base
{
	T m;
};

//class Son : public Base // 錯誤, 必須要知道父類中的T類型, 才能繼承給子類
class Son :public Base<int>
{

};


void test01()
{
	Son s1;

}

// 如果想靈活指定父類中T類型, 子類也需要變為類模板
template<class T1, class T2>
class Son2 : public Base<T2>
{
public:
	Son2()
	{
		cout << "T1的類型為:  " << typeid(T1).name() << endl;
		cout << "T2的類型為:  " << typeid(T2).name() << endl;

	}

	T1 obj;

};

void test02()
{
	Son2<int, char>S2;

}

int main() {

	//test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

