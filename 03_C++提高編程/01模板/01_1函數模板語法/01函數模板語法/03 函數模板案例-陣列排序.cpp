#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 實現通用 對陣列進行排序的函數
// 規則 從大到小
// algo 選擇
// 測試 char 陣列, int陣列

// 交換函數模板
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 排序algo
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; // 認定最大值的下標
		for (int j = i + 1; j < len; j++)
		{
			// 認定的最大值 比 遍歷出的數值要小, 說明 j下標的元素才是真正的最大值
			if (arr[max] < arr[j])
			{
				max = j; // 更新最大值下標
			}
		}
		if (max != i)
		{
			// 交換max和i元素
			mySwap(arr[max], arr[i]);
		}
	}

}

// 提供輸出陣列模板
template<class T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void test01()
{
	// 測試char陣列
	char charArr[] = "badcfe";

	int num = sizeof(charArr) / sizeof(char);

	mySort(charArr, num);

	printArray(charArr, num);

}

void test02()
{
	// 測試int陣列
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };

	int num = sizeof(intArr) / sizeof(int);

	mySort(intArr, num);

	printArray(intArr, num);

}


int main() {

	test01();
	test02();

	system("pause");

	return EXIT_SUCCESS;
}

