#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

// �L�����
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
	p1->printText("�J¾�ҩ�");
	p1->printText("��¾�ҩ�");
	p1->printText("���~�ӽ�");
	p1->printText("�ե�ӽ�");
	cout << "�L����ϥΦ��Ƭ�:  " << p1->m_Count << endl;

	Printer * p2 = Printer::getInstance();
	p2->printText("�ȹC�ӽ�");
	cout << "�L����ϥΦ��Ƭ�:  " << p2->m_Count << endl;


}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}