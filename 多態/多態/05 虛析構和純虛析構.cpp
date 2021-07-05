//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// 虛析構和純虛析構
//
//class Animal
//{
//public:
//
//	Animal()
//	{
//		cout << "Animal構造函數調用" << endl;
//	}
//
//	// 利用虛析構可以解決 父類指針釋放子類對象時不乾淨的問題
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虛析構函數調用" << endl;
//	//}
//	
//	// 純虛析構 需要聲明也需要實現
//	// 有了純虛析構之後, 這個類也屬於抽象類, 無法實例化對象
//	virtual ~Animal() = 0;
//
//	// 純虛函數
//	virtual void speak() = 0;
//
//};
//
//Animal:: ~Animal()
//{
//	cout << "Animal純虛析構函數調用" << endl;
//}
//
//
//class Cat : public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat構造函數調用" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "小貓在說話" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析構函數調用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string *m_Name;
//
//};
//
//void test01()
//{
//	Animal * animal = new Cat("Tom");
//	animal->speak();
//	// 父類指針在析構時候 不會調用子類中析構函數, 導致子類如果有堆區屬性, 出現記憶體流失
//	delete animal;
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
