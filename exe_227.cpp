/*
	Exe_227: Đếm số lượng các phần tử kề nhau mà trái dấu
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
	if(a[1] * a[0] < 0)
	{
		dem++;
	}
	if(a[n - 2] * a[n - 1] < 0)
	{
		dem++;
	}
	for(int i = 1; i < n - 1; i++)
	{
		if(a[i + 1] * a[i] <  0 || a[i - 1] * a[i] < 0)
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}