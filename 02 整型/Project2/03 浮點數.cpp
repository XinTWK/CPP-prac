#include <iostream>
using namespace std;

int main3() {
	//默認情況下 輸出一個小數 會顯示出六位有效數字
	float f1 = 3.1415926f;

	cout << "f1 = " << f1 << endl;

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl;

	//統計float和double佔用內存空間
	cout << "float 佔用內存空間為:  " << sizeof(float) << endl; // 4字節

	cout << "double 佔用內存空間為:  " << sizeof(double) << endl; // 8字節

	//科學計數法
	float f2 = 3e2; //3*10^2;
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3*0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");

	return 0;
}