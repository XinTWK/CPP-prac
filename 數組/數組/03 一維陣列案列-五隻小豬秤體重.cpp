#include <iostream>
using namespace std;

int main3() {

	// 1.�Ыؤ����p���魫���}�C

	int arr[] = { 300,350,500,400,250 };

	// 2. �q�}�C�����̤j��

	int max = 0;
	for(int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	// 3. ��X�̤j��
	cout << "�̭����p���魫��:  " << max << endl;
		
	system("pause");

	return 0;
}