/*
	Exe_277: Xóa tất cả các số nguyên tố trong mảng nguyên
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
	if(n == 2)
	{
		return true;
	}

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void Result(int a[], int &n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			for(int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}
}

int main()
{
	int a[100];
	int n = 0;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	Result(a, n);
	Output(a, n);

	return 0;
}