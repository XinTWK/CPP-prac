#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>

// 容器嵌套容器
void test01()
{
	vector<vector<int>>v;

	// 創建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	// 向小容器添加數據
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	// 將小容器插入到大容器中
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	// 通過大容器, 把所有數據遍歷一遍
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		// (*it) ----容器 vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << *vit << " ";
		}
		cout << endl;
	}
}



int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

