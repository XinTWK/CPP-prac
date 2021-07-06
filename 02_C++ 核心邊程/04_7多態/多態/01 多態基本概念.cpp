#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 多態

// 動物類
class Animal
{
public:
	// 虛函數
	virtual void speak()
	{
		cout << "動物在說話" << endl;
	}
};


// 貓類
class Cat :public Animal
{
public:
	// 重寫  函數返回值類型  函數名  參數列表  完全相同
	void speak()
	{
		cout << "小貓在說話" << endl;
	}
};

// 狗類
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "小狗在說話" << endl;
	}
};

// 執行說話的函數
// 地址早綁定  在編譯階段確定函數定址
// 如果想執行讓貓說話, 那麼這個函數地址就不能提前綁定, 需要在運行階段進行綁定, 地址晚綁定

// 動態多態滿足條件
// 1. 有繼承關係
// 2. 子類重寫父類的虛函數

// 動態多態使用
// 父類的指針或者引用 指向子類對象

void doSpeak(Animal &animal)  // Animal & animal = cat;
{
	animal.speak(); 
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;

}


int main() {

	//test01();

	test02();

	system("pause");

	return EXIT_SUCCESS;
}
