#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>

// vector容器構造

void printVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int>v1; // 默認構造 無參構造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	// 通過區間方式進行構造
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	// n個elem方式構造
	vector<int>v3(10, 100);
	printVector(v3);

	// 拷貝構造
	vector<int>v4(v3);
	printVector(v4);
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

