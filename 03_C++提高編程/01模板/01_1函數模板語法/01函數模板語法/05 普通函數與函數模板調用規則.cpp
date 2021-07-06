#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 炊硄ㄧ计籔ㄧ计家狾秸ノ砏玥
// 1. 狦ㄧ计家狾㎝炊硄ㄧ计常秸ノ, 纔秸ノ炊硄ㄧ计
// 2. 硄筁家狾把计 眏秸ノㄧ计家狾
// 3. ㄧ计家狾祇ネㄧ计更
// 4. 狦ㄧ计家狾玻ネで皌, 纔秸ノㄧ计家狾

void myPrint(int a, int b)
{
	cout << "秸ノ炊硄ㄧ计" << endl;
}


template<class T>
void myPrint(T a, T b)
{
	cout << "秸ノㄧ计家狾" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "秸ノ更家狾" << endl;
}

void test01()
{
	int a = 10;
	int b = 20;

	//myPrint(a, b);

	// 硄筁家狾把计, 眏秸ノㄧ计家狾
	//myPrint<>(a, b);

	//myPrint(a, b, 100);

	// 狦ㄧ计家狾玻ネで皌, 纔秸ノㄧ计家狾
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1, c2);
}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

