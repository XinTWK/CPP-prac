//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//#include<string>
//
//// 分別利用普通寫法和多態技術實現計算機
//
//// 普通寫法
//
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		// 如果想擴展新的功能, 需要修改源碼
//		// 在真實開發中 提倡 開閉原則
//		// 開閉原則: 對擴展進行開放, 對修改進行關閉
//	}
//
//
//	int m_Num1; // 操作數1
//	int m_Num2; // 操作數2
//};
//
//void test01()
//{
//	// 創建計算機對象
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//
//// 利用多態實現計算機
//// 多態好處:
//// 1. 組織結構清晰
//// 2. 可讀性強
//// 3. 對於前期和後期擴展以前維護性高
//
//// 實現計算機抽象類
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//// 加法計算機類
//class AddCaculator : public AbstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//
//};
//
//// 減法計算機類
//class SubCaculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//
//};
//
//// 乘法計算機類
//class MulCaculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//
//};
//
//void test02()
//{
//	// 多態使用條件
//	// 父類指針或者引用指向子類對象
//
//	// 加法運算
//	AbstractCalculator * abc = new AddCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	// 用完後記得銷毀
//	delete abc;
//
//	// 減法運算
//	abc = new SubCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//	// 乘法運算
//	abc = new MulCaculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	delete abc;
//
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//
//	return EXIT_SUCCESS;
//}
