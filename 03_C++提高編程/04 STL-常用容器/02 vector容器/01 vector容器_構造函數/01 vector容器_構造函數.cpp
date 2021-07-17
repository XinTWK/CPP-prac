#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<vector>

// vector�e���c�y

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
	vector<int>v1; // �q�{�c�y �L�Ѻc�y

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	// �q�L�϶��覡�i��c�y
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);

	// n��elem�覡�c�y
	vector<int>v3(10, 100);
	printVector(v3);

	// �����c�y
	vector<int>v4(v3);
	printVector(v4);
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}

