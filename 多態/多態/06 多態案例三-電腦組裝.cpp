#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 抽象不同零件類

// 抽象CPU類
class CPU
{
public:
	// 抽象的計算函數
	virtual void calculate() = 0;
};

// 抽象GPU類
class GPU
{
public:
	// 抽象的計算函數
	virtual void display() = 0;
};

// 抽象記憶體類
class Memory
{
public:
	// 抽象的存儲函數
	virtual void storage() = 0;
};

// 電腦類
class Computer
{
public:
	Computer(CPU * cpu, GPU * gpu, Memory * mem)
	{
		m_cpu = cpu;
		m_gpu = gpu;
		m_memory = mem;
	}

	// 提供析構函數 釋放3個電腦零件
	~Computer()
	{
		// 釋放CPU零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		// 釋放GPU零件
		if (m_gpu != NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}

		// 釋放記憶體零件
		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}


	// 提供工作的函數
	void work()
	{
		// 讓零件工作起來, 調用接口
		m_cpu->calculate();

		m_gpu->display();

		m_memory->storage();
	}

private:
	CPU * m_cpu; // CPU的零件指針
	GPU * m_gpu; // GPU的零件指針
	Memory * m_memory; // 記憶體零件指針
};

// 具體廠商
// Intel廠商
class IntelCPU : public CPU
{
	virtual void calculate()
	{
		cout << "Intel的CPU開始計算了!" << endl;
	}
};

class IntelGPU : public GPU
{
	virtual void display()
	{
		cout << "Intel的GPU開始顯示了!" << endl;
	}
};

class IntelMemory : public Memory
{
	virtual void storage()
	{
		cout << "Intel的記憶體開始存儲了!" << endl;
	}
};

// Lenovo 廠商
class LenovoCPU : public CPU
{
	virtual void calculate()
	{
		cout << "Lenovo的CPU開始計算了!" << endl;
	}
};

class LenovoGPU : public GPU
{
	virtual void display()
	{
		cout << "Lenovo的GPU開始顯示了!" << endl;
	}
};

class LenovoMemory : public Memory
{
	virtual void storage()
	{
		cout << "Lenovo的記憶體開始存儲了!" << endl;
	}
};

void test01()
{
	// 第一台電腦零件
	CPU * intelCpu = new IntelCPU;
	GPU * intelGpu = new IntelGPU;
	Memory * intelMem = new IntelMemory;


	cout << "第一台電腦開始工作: " << endl;
	// 創建第一台電腦
	Computer * computer1 = new Computer(intelCpu, intelGpu, intelMem);
	computer1->work();
	delete computer1;

	cout << "----------------------------" << endl;

	cout << "第二台電腦開始工作: " << endl;
	// 第二台電腦組裝
	Computer * computer2 = new Computer(new LenovoCPU,new LenovoGPU,new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "----------------------------" << endl;

	cout << "第三台電腦開始工作: " << endl;
	// 第二台電腦組裝
	Computer * computer3 = new Computer(new LenovoCPU, new IntelGPU, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main() {

	test01();

	system("pause");

	return EXIT_SUCCESS;
}
