#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 多態案例2 製作飲品
class AbstractDrinking
{
public:

	// 煮水
	virtual void Boil() = 0;

	// 沖泡
	virtual void Brew() = 0;

	// 倒入杯中
	virtual void PourInCup() = 0;

	// 加入輔料
	virtual void PutSomething() = 0;


	// 製作飲品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

	// 製作咖啡
	class Coffee : public AbstractDrinking
	{
	public:
		// 煮水
		virtual void Boil()
		{
			cout << "煮山泉水" << endl;
		}

		// 沖泡
		virtual void Brew()
		{
			cout << "沖泡咖啡" << endl;
		}

		// 倒入杯中
		virtual void PourInCup()
		{
			cout << "倒入杯中" << endl;
		}

		// 加入輔料
		virtual void PutSomething()
		{
			cout << "加入糖和牛奶" << endl;
		}
	};

	// 製作茶葉
	class Tea : public AbstractDrinking
	{
	public:
		// 煮水
		virtual void Boil()
		{
			cout << "煮礦泉水" << endl;
		}

		// 沖泡
		virtual void Brew()
		{
			cout << "沖泡茶葉" << endl;
		}

		// 倒入杯中
		virtual void PourInCup()
		{
			cout << "倒入杯中" << endl;
		}

		// 加入輔料
		virtual void PutSomething()
		{
			cout << "加入檸檬片" << endl;
		}
	};

	// 製作函數
	void doWork(AbstractDrinking * abs) // AbstractDrinking * abs = new Coffee;
	{
		abs->makeDrink();
		delete abs; // 釋放
	}


	void test01()
	{
		// 製作咖啡
		doWork(new Coffee);

		cout << "---------------------------" << endl;
		// 製作茶葉
		doWork(new Tea);
	}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
