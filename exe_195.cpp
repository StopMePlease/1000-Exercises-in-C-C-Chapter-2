/*
	Exe_195: Cho mảng số thực có nhiều hơn ba giá trị, và các giá trị khác nhau từng đôi 1. Hãy liệt kê tất cả các bộ ba giá trị (a, b, c) với a = b + c với a, b, c là 3 giá trị khác nhau trong mảng
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
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j < n; j++)
		{
			for(int k = 2; k < n; k++)
			{
				if(a[i] == a[j] + a[k])
				{
					cout << a[i] << " = " << a[j] << " + " << a[k] << endl;
				}
				else if(a[j] == a[i] + a[k])
				{
					cout << a[j] << " = " << a[i] << " + " << a[k] << endl;
				}
				else if(a[k] == a[i] + a[j])
				{
					cout << a[k] << " = " << a[i] << " + " << a[j] << endl;
				}
			}
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