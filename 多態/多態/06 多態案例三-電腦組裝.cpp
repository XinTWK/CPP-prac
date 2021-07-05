#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ��H���P�s����

// ��HCPU��
class CPU
{
public:
	// ��H���p����
	virtual void calculate() = 0;
};

// ��HGPU��
class GPU
{
public:
	// ��H���p����
	virtual void display() = 0;
};

// ��H�O������
class Memory
{
public:
	// ��H���s�x���
	virtual void storage() = 0;
};

// �q����
class Computer
{
public:
	Computer(CPU * cpu, GPU * gpu, Memory * mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_memory = mem;
	}

	// ���ѪR�c��� ����3�ӹq���s��
	~Computer()
	{
		// ����CPU�s��
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		// ����GPU�s��
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}

		// ����O����s��
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}


	// ���Ѥu�@�����
	void work()
	{
		// ���s��u�@�_��, �եα��f
		m_cpu->calculate();

		m_gpu->display();

		m_memory->storage();
	}

private:
	CPU * m_cpu; // CPU���s����w
	GPU * m_gpu; // GPU���s����w
	Memory * m_memory; // �O����s����w
};

// ����t��
// Intel�t��
class IntelCPU : public CPU
{
	virtual void calculate()
	{
		cout << "Intel��CPU�}�l�p��F!" << endl;
	}
};

class IntelGPU : public GPU
{
	virtual void display()
	{
		cout << "Intel��GPU�}�l��ܤF!" << endl;
	}
};

class IntelMemory : public Memory
{
	virtual void storage()
	{
		cout << "Intel���O����}�l�s�x�F!" << endl;
	}
};

// Lenovo �t��
class LenovoCPU : public CPU
{
	virtual void calculate()
	{
		cout << "Lenovo��CPU�}�l�p��F!" << endl;
	}
};

class LenovoGPU : public GPU
{
	virtual void display()
	{
		cout << "Lenovo��GPU�}�l��ܤF!" << endl;
	}
};

class LenovoMemory : public Memory
{
	virtual void storage()
	{
		cout << "Lenovo���O����}�l�s�x�F!" << endl;
	}
};

void test01()
{
	// �Ĥ@�x�q���s��
	CPU * intelCpu = new IntelCPU;
	GPU * intelGpu = new IntelGPU;
	Memory * intelMem = new IntelMemory;


	cout << "�Ĥ@�x�q���}�l�u�@: " << endl;
	// �ЫزĤ@�x�q��
	Computer * computer1 = new Computer(intelCpu, intelGpu, intelMem);
	computer1->work();
	delete computer1;

	cout << "----------------------------" << endl;

	cout << "�ĤG�x�q���}�l�u�@: " << endl;
	// �ĤG�x�q���ո�
	Computer * computer2 = new Computer(new LenovoCPU,new LenovoGPU,new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------------------" << endl;

	cout << "�ĤT�x�q���}�l�u�@: " << endl;
	// �ĤG�x�q���ո�
	Computer * computer3 = new Computer(new LenovoCPU, new IntelGPU, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
