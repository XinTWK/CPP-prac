#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// 印表機類
class Printer
{
public:
	static Printer * getInstance()
	{
		return singlePrinter;
	}

	void printText(string text)
	{
		cout << text << endl;
		m_Count++;
	}

	int m_Count = 0;

private:
	Printer(){}
	Printer(const Printer&){}
	static Printer * singlePrinter;
};
Printer * Printer::singlePrinter = new Printer;

void test01()
{
	Printer * p1 = Printer::getInstance();
	p1->printText("入職證明");
	p1->printText("離職證明");
	p1->printText("調薪申請");
	p1->printText("調休申請");
	cout << "印表機使用次數為:  " << p1->m_Count << endl;

	Printer * p2 = Printer::getInstance();
	p2->printText("旅遊申請");
	cout << "印表機使用次數為:  " << p2->m_Count << endl;


}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}