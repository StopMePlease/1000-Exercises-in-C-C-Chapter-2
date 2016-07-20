/*
	Exe_187: Hãy liệt kê các vị trí mà giá trị tại đó bằng giá trị dương nhỏ nhất trong mảng 1 chiều các số thực
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

void Result(int a[], int n)
{
	int ss = 0;
	int vt = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			ss = a[i];
			vt = i;
			break;
		}
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(a[i] < ss && a[i] % 2 == 0)
		{
			ss = a[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] == ss)
		{
			cout << i << "\t";
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