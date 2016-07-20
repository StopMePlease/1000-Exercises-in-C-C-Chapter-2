/*
	Exe_192: Hãy liệt kê các giá trị trong mảng 1 chiều các số nguyên có chữ số đầu tiên là chữ số chẵn
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
	while(n)
	{
		n /= 10;
		if(n < 10 && n % 2 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}	
}

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			cout << a[i] << "\t";
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