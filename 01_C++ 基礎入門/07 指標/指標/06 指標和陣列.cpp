#include <iostream>
using namespace std;

int main6() {

	//���ЩM�}�C
	//�Q�Ϋ��гX�ݰ}�C��������

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	cout << "�Ĥ@�Ӥ�����:  " << arr[0] << endl;

	int * p = arr; //arr�N�O�}�C�����a�}

	cout << "�Q�Ϋ��ШӳX�ݲĤ@�Ӥ���:  " << *p << endl;

	p++; //�����ЦV�᰾��4�Ӧr�`

	cout << "�Q�Ϋ��ШӳX�ݲĤG�Ӥ���:  " << *p << endl;

	cout << "�Q�Ϋ��w�M���}�C " << endl;

	int *p2 = arr;

	for(int i = 0; i < 10; i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}


	system("pause");

	return 0;
}