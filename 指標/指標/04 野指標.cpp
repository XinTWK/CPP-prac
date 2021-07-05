#include<iostream>
using namespace std;

int main4() {

	//迷途指針
	//在程式中,盡量避免出現迷途指針
	int *p = (int *)0x1100;

	cout << *p << endl;

	system("pause");

	return 0;
}