/*
	Exe_272: Xóa tất cả số lớn nhất trong mảng thực
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

void Delete(int a[], int &n, int x)
{
	for(int i = x - 1; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

void Result(int a[], int &n)
{
	int max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
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