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

	
	Date(int year = 1, int month = 1, int day = 1)//��ȫȱʡ�Ϳ��������޲����Ĺ��캯���ʹ���������Ĳ���
	{
		_year = year;
		_month = month;
		_day = day;
	}//���캯��

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
	int _year;     // ��
	int _month;    // ��
	int _day;      // ��
};
class Person
{
public:
	void PrintPersonInfo()
	{}
//private:
	char _name[20];  // ����
	char _gender[3];
	int  _age;
};


int main()
{
	// ����
	 //Person::_age = 1;
	 //Person::PrintPersonInfo(); // thisָ��

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

	// 1 ���洢��Ч���ݣ�ռλ����ʶ�������
	cout << sizeof(A2) << endl;//���໹��ռһ���ֽڣ�Ŀ�ľ���ռλ����ʾ����Ĵ���
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
	Date d1;//����һ������
	d1.Init(2024, 6, 7);//��ʼ��
	d1.Print();//thisָ��Ĺ�Ч

	Date d2(2022,12);//���û����ʾ�Ĺ��캯�� ,cpp���Զ������޲εĹ��캯��
	d2.Print();

}

#include <stdio.h>
#include <stdbool.h>

#define MAX 10000 // ����������ദ��10000���ڵ�ż��

// ���һ�����Ƿ�Ϊ����
bool is_prime(int n) {
    if (n <= 1) return false; // С�ڵ���1������������
    if (n <= 3) return true; // 2��3������
    if (n % 2 == 0 || n % 3 == 0) return false; // �ų��ܱ�2��3��������

    // ֻ���鵽sqrt(n)���ɣ���Ϊ���n�Ǻ�����������һ��������������ƽ����
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// ���һ��ż����Ϊ��������֮��
void print_prime_sum(unsigned int n) {
    if (n % 2 != 0) {
        printf("�����������ż����\n");
        return; // ������벻��ż����ֱ�ӷ���
    }

    printf("%u = ", n);
    for (int k = 3; k <= n / 2; k += 2) { // ֻ�������
        if (is_prime(k) && is_prime(n - k)) { // ȷ��k��n-k��������
            printf("%d + %d\n", k, n - k);
            break; // �ҵ�һ�������������ѭ��
        }
    }
}

int main() {
    unsigned int n;
    printf("�������2��ż��:");
    scanf("%u", &n);
    print_prime_sum(n);
    return 0;
}
һ��leetcode��Ŀ
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

	 �������ǿ�������������thisָ��
	void Print()
	{
		 this = nullptr;
		cout << this << endl;
		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	 Print(&d1)
	 Print(&d2)
	 thisָ��Ķ���ʹ��ݣ����Ǳ������Ļ���ǲ���ȥ��
	 �������ǿ�������������thisָ��
	/*void Print(Date* this)
	{
	cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
	}*/

private:
	int _year;     // ��
	int _month;    // ��
	int _day;      // ��
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

	 ��ʼ��
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
	int _year;     // ��
	int _month;    // ��
	int _day;      // ��
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

	~Stack()//��������
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}

	void Push(int x)
	{
		 ....
		 ����
		_a[_top++] = x;
	}

private:
	int* _a;
	int _top;
	int _capacity;
};

 21:10����
int main()
{
	/*Date d1(2022, 9, 21);
	Date d2(2022, 9, 21);
	Date d3;*/
	
	 �޲εĲ�Ҫ����������д
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