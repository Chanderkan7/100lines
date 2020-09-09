#include <iostream>
using namespace std;
class Adder
{
	public:
	Adder(int i = 0)
	{
		total = i;
	}	
	void addNum(int number)
	{
		total += number;
	}
	int getTotal()
	{
		return total;
	};
	private:
		int total;
};
int main()
{
	Adder a;
	a.addNum(10);
	a.addNum(20);
	a.addNum(30);
	cout << "Total: "<< a.getTotal() << endl;
	return 0;
}
/*#include<iostream>
using namespace std;
class EncapsulationExample{
	private:
		int a;
	public:
		void set(int x)
		{
			a = x;			
		}
		int get()
		{
			return a;
		}
};
int main()
{
	EncapsulationExample e1;
	e1.set(10);
	cout << e1.get();
	return 0;
}
#include<iostream>
using namespace std;
class Encapsulation
{
	private:
		int x;
	public:
		void set(int a)
		{
			x = a;			
		}
		int get()
		{
			return x;
		}
};
int main()
{
	Encapsulation obj;
	obj.set(5);
	cout << obj.get();
}
#include<iostream>
using namespace std;
class ExampleEncap
{
	private:
		int num;
		char ch;
	public:
		int getNum() const
		{
			return num;
		}
	char getCh() const
	{
		return ch;
	}
	void setNum(int num)
	{
		this -> num = num;
	}
	void setCh(char ch)
	{
		this -> ch = ch;
	}
};
int main()
{
	ExampleEncap obj;
	obj.setNum(1);
	obj.setCh('A');
	cout << obj.getNum() << endl;
	cout << obj.getCh() << endl;
	return 0;
}*/
