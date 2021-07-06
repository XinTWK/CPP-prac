#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��{�q�� ��}�C�i��ƧǪ����
// �W�h �q�j��p
// algo ���
// ���� char �}�C, int�}�C

// �洫��ƼҪO
template<class T>
void mySwap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

// �Ƨ�algo
template<class T>
void mySort(T arr[],int len)
{
	for (int i = 0; i < len; i++)
	{
		int max = i; // �{�w�̤j�Ȫ��U��
		for (int j = i + 1; j < len; j++)
		{
			// �{�w���̤j�� �� �M���X���ƭȭn�p, ���� j�U�Ъ������~�O�u�����̤j��
			if (arr[max] < arr[j])
			{
				max = j; // ��s�̤j�ȤU��
			}
		}
		if (max != i)
		{
			// �洫max�Mi����
			mySwap(arr[max], arr[i]);
		}
	}

}

// ���ѿ�X�}�C�ҪO
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
	// ����char�}�C
	char charArr[] = "badcfe";

	int num = sizeof(charArr) / sizeof(char);

	mySort(charArr, num);

	printArray(charArr, num);

}

void test02()
{
	// ����int�}�C
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

