/*
	Exe_222: Đếm số lượng phần tử cùng lớn hơn hay nhỏ hơn các phần tử xung quanh
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

int Result(int a[], int n)
{
	int dem = 0;
	for(int i = 1; i < n - 1; i++)
	{
		if((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i + 1] && a[i] < a[i - 1]))
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
	int a[100];
	int n, x;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}