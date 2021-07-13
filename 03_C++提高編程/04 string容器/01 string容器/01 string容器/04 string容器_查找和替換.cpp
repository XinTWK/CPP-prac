#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// ﹃琩т㎝蠢传

// 1. 琩т
void test01()
{
	string str1 = "abcdefgde";
	
	int pos =  str1.find("de");

	if (pos == -1)
	{
		cout << "ゼт﹃" << endl;
	}
	else
	{
		cout << "т﹃, pos = " << pos << endl;
	}

	// rfind ㎝finc 跋
	// rfind 眖┕т琩т   find 眖オ┕琩т
	pos = str1.rfind("de");

	cout << "pos = " << pos << endl;

}

// find 琩т琌眖オ┕   rfind 眖┕オ
// findт﹃琩т材才竚, тぃ-1




// 2. 蠢传
void test02()
{
	string str1 = "abcdefg";

	// 眖1腹竚癬 3才 蠢传"1111"
	str1.replace(1, 3, "1111");

	cout << "str1 = " << str1 << endl;
}

// replace蠢传, 璶﹚眖竚癬, ぶ才, 蠢传Θ或妓﹃


int main() {

	//test01();
	test02();


	system("pause");

	return EXIT_SUCCESS;
}
