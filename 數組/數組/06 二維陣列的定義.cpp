#include <iostream>
using namespace std;

int main6() {

	//蝴皚﹚竡よΑ
	/*
		1. 计沮摸  皚[ 计 ][ ︽计 ];
		2. 计沮摸  皚[ 计 ][ ︽计 ] = { {计沮1, 计沮2 } , {计沮3,计沮4 } };
		3. 计沮摸  皚[ 计 ][ ︽计 ] = { 计沮1, 计沮2  , 计沮3, 计沮4 };
		4. 计沮摸  皚[      ][ ︽计 ] = { 计沮1, 计沮2  , 计沮3, 计沮4 };
	*/

	////1. 计沮摸  皚[ 计 ][ ︽计 ];
	int arr[2][3];
	//arr[0][0] = 1;
	//arr[0][1] = 2;
	//arr[0][2] = 3;
	//arr[1][0] = 4;
	//arr[1][1] = 5;
	//arr[1][2] = 6;
	//
	////cout << arr[0][0] << endl;
	////cout << arr[0][1] << endl;
	////cout << arr[0][2] << endl;
	////cout << arr[1][0] << endl;
	////cout << arr[1][1] << endl;
	////cout << arr[1][2] << endl;

	////糷碻吏块计,ず糷碻吏块︽计
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr[i][j] << endl;
	//	}
	//}

	//2. 计沮摸  皚[计][︽计] = { { 计沮1, 计沮2 } ,{ 计沮3,计沮4 } };

	int arr2[2][3] = 
	{
		{1,2,3},
		{4,5,6} 
	};
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr2[i][j] << " ";
	//	}
	//	cout << endl;
	//}

	//3. 计沮摸  皚[ 计 ][ ︽计 ] = { 计沮1, 计沮2  , 计沮3, 计沮4 };
	int arr3[2][3] = { 1,2,3,4,5,6 };
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		cout << arr3[i][j] << " ";
	//	}
	//	cout << endl;
	//}


	//4. 计沮摸  皚[      ][ ︽计 ] = { 计沮1, 计沮2  , 计沮3, 计沮4 };
	int arr4[][3] = { 1,2,3,4,5,6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}


	system("pause");

	return 0;
}