#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// �h�A�ר�2 �s�@���~
class AbstractDrinking
{
public:

	// �N��
	virtual void Boil() = 0;

	// �R�w
	virtual void Brew() = 0;

	// �ˤJ�M��
	virtual void PourInCup() = 0;

	// �[�J����
	virtual void PutSomething() = 0;


	// �s�@���~
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

	// �s�@�@��
	class Coffee : public AbstractDrinking
	{
	public:
		// �N��
		virtual void Boil()
		{
			cout << "�N�s�u��" << endl;
		}

		// �R�w
		virtual void Brew()
		{
			cout << "�R�w�@��" << endl;
		}

		// �ˤJ�M��
		virtual void PourInCup()
		{
			cout << "�ˤJ�M��" << endl;
		}

		// �[�J����
		virtual void PutSomething()
		{
			cout << "�[�J�}�M����" << endl;
		}
	};

	// �s�@����
	class Tea : public AbstractDrinking
	{
	public:
		// �N��
		virtual void Boil()
		{
			cout << "�N�q�u��" << endl;
		}

		// �R�w
		virtual void Brew()
		{
			cout << "�R�w����" << endl;
		}

		// �ˤJ�M��
		virtual void PourInCup()
		{
			cout << "�ˤJ�M��" << endl;
		}

		// �[�J����
		virtual void PutSomething()
		{
			cout << "�[�J�f�c��" << endl;
		}
	};

	// �s�@���
	void doWork(AbstractDrinking * abs) // AbstractDrinking * abs = new Coffee;
	{
		abs->makeDrink();
		delete abs; // ����
	}


	void test01()
	{
		// �s�@�@��
		doWork(new Coffee);

		cout << "---------------------------" << endl;
		// �s�@����
		doWork(new Tea);
	}


int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
