/*
	Exe_220: Đếm số lượng giá trị có chữ số tận củng bằng 5 trong mảng nguyên
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
	for(int i = 1; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

bool Check(int n)
{
	if(n < 10 && n == 5)
	{
		return true;
	}
	int temp = n % 10;
	return temp == 5 ? true : false;
}

int Result(int a[], int n, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			dem += 1;
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
	cout << "Input x: ";
	cin >> x;
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n, x);
	cout << kq;
	
	return 0;
}