/*
	Exe_185: Hãy liệt kê các vị trí mà giá trị tại đó là số chình phương trong mảng 1 chiều các số nguyên
*/
#include <iostream>
#include <cmath>

using namespace std;

void Input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

bool Check(int n)
{
	return n == pow(sqrt((double)n), 2);
}

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			cout << i + 1 << "\t";
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	Result(a, n);
	
	return 0;
}