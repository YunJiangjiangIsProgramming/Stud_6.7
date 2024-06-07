#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>

using namespace std;
class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}


private:

	int _year;
	int _month;
	int _day;


};

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	
	Date(int year = 1, int month = 1, int day = 1)//用全缺省就可以做到无参数的构造函数和传任意个数的参数
	{
		_year = year;
		_month = month;
		_day = day;
	}//构造函数

	/*Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}*/

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;     // 年
	int _month;    // 月
	int _day;      // 日
};
class Person
{
public:
	void PrintPersonInfo()
	{}
//private:
	char _name[20];  // 声明
	char _gender[3];
	int  _age;
};


int main()
{
	// 不能
	 //Person::_age = 1;
	 //Person::PrintPersonInfo(); // this指针

	Person p1;
	p1._age = 1;

	Person p2;
	Person* ptr = &p2;
	ptr->_age = 2;


	return 0;
}
class A
{
public:
	void PrintA()
	{
		cout << _a << endl;
	}
//private:
	char _a;
	int _b;
};

class A2 {
public:
	void f2() {}
};

class A3
{};


int main()
{
	A aa1;
	A aa2;
	//A aa3;
	cout << sizeof(aa1) << endl;

	// 1 不存储有效数据，占位，标识对象存在
	cout << sizeof(A2) << endl;//空类还是占一个字节，目的就是占位，表示对象的存在
	cout << sizeof(A3) << endl;

	A2 aaa2;
	A2 aaaa2;
	cout << &aaa2 << endl;
	cout << &aaaa2 << endl;

	aa1._a = 'A';
	aa1.PrintA();

	aa2._a = 'a';
	aa2.PrintA();


	return 0;
}
int main()
{
	Date d1;//创建一个对象
	d1.Init(2024, 6, 7);//初始化
	d1.Print();//this指针的功效

	Date d2(2022,12);//如果没有显示的构造函数 ,cpp会自动生成无参的构造函数
	d2.Print();

}

#include <stdio.h>
#include <stdbool.h>

#define MAX 10000 // 假设我们最多处理10000以内的偶数

// 检查一个数是否为质数
bool is_prime(int n) {
    if (n <= 1) return false; // 小于等于1的数不是质数
    if (n <= 3) return true; // 2和3是质数
    if (n % 2 == 0 || n % 3 == 0) return false; // 排除能被2和3整除的数

    // 只需检查到sqrt(n)即可，因为如果n是合数，它必有一个因数不超过其平方根
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// 输出一个偶数作为两个质数之和
void print_prime_sum(unsigned int n) {
    if (n % 2 != 0) {
        printf("输入的数不是偶数。\n");
        return; // 如果输入不是偶数，直接返回
    }

    printf("%u = ", n);
    for (int k = 3; k <= n / 2; k += 2) { // 只检查奇数
        if (is_prime(k) && is_prime(n - k)) { // 确保k和n-k都是质数
            printf("%d + %d\n", k, n - k);
            break; // 找到一对质数后就跳出循环
        }
    }
}

int main() {
    unsigned int n;
    printf("输入大于2的偶数:");
    scanf("%u", &n);
    print_prime_sum(n);
    return 0;
}
一道leetcode题目
class Solution
{
public:
	int maxOperations(vector<int>& nums) {
		int n = nums.size(), t = 0;
		for (int i = 1; i < n; i += 2) {
			if (nums[i] + nums[i - 1] != nums[1] + nums[0]) {
				break;
			}
			t++;
		}
		return t;
	}
};

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	 但是我们可以再类里面用this指针
	void Print()
	{
		 this = nullptr;
		cout << this << endl;
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	 Print(&d1)
	 Print(&d2)
	 this指针的定义和传递，都是编译器的活，我们不能去抢
	 但是我们可以再类里面用this指针
	/*void Print(Date* this)
	{
	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}*/

private:
	int _year;     // 年
	int _month;    // 月
	int _day;      // 日
};

int main()
{
	Date d1;
	d1.Init(2022, 9, 21);

	Date d2;
	d2.Init(2022, 9, 22);

	d1.Print();
	d2.Print();

	cout << &d1 << endl;
	cout << &d2 << endl;

	return 0;
}


class Date
{
public:
	/*void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}*/

	 初始化
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date()
	{
		_year = 1;
		_month = 1;
		_day = 1;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;     // 年
	int _month;    // 月
	int _day;      // 日
};

class Stack
{
public:
	Stack(int capacity = 4)
	{
		_a = (int*)malloc(sizeof(int)*capacity);
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}

		_top = 0;
		_capacity = capacity;
	}

	~Stack()//析构函数
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(int x)
	{
		 ....
		 扩容
		_a[_top++] = x;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

 21:10继续
int main()
{
	/*Date d1(2022, 9, 21);
	Date d2(2022, 9, 21);
	Date d3;*/
	
	 无参的不要像下面这样写
	Date d4();
	Date func();

	/*d1.Print();
	d2.Print();
	d3.Print();*/

	Stack st;
	st.Push(1);
	st.Push(2);
	st.Push(3);

	return 0;
}