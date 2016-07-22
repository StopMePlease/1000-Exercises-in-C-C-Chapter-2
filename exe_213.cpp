/*
	Exe_213: Tính trung bình cộng các giá trị lón hơn giá trị x mảng 1 chiều các số nguyên
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

int Result(int a[], int n, int x)
{
	int sum = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > x)
		{
			sum += a[i];
			dem++;
		}
	}
	return sum / dem;
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