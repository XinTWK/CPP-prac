#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm> // 標準算法的頭文件


// vector容器存放內置數據類型

void myPrint(int val)
{
	cout << val << endl;

}


void test01()
{
	// 創建了一個vector容器
	vector<int> v;

	// 向容器中插入數據
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// 通過疊代器訪問容器中的數據
	vector<int>::iterator itBegin = v.begin(); // 起始疊代器  指向容器中第一個元素
	vector<int>::iterator itEnd = v.end(); // 結束疊代器  指向容器中最後一個元素的下一個位置

	// 第一種遍歷方式
	while (itBegin != itEnd)
	{
		cout << *itBegin << endl;
		itBegin++;
	}


	// 第二種遍歷方式
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}

	// 第三種遍歷方式
	for_each(v.begin(), v.end(), myPrint);



}




int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

