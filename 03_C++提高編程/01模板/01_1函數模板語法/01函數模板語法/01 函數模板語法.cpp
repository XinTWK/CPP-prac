#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ㄧ计家狾

// ユ传ㄢ俱计ㄧ计
void swapInt(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;

}

// ユ传ㄢ疊翴计ㄧ计
void swapDouble(double &a, double &b)
{
	double temp = a;
	a = b;
	b = temp;
}


// ㄧ计家 
template<typename T> // 羘家狾, 禗絪亩竟絏い候蛤帝Tぃ璶厨岿, T琌硄ノ计沮摸
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;

	//swapInt(a, b);
	// ノㄧ计家狾ユ传
	// ㄢ贺よΑㄏノㄧ计家狾
	// 1. 笆摸崩
	//mySwap(a, b);
	// 2. 陪ボ﹚摸
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//double c = 1.1;
	//double d = 2.2;

	//swapDouble(c, d);
	//cout << "c = " << c << endl;
	//cout << "d = " << d << endl;
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

