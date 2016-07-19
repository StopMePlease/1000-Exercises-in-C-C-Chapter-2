/*
	Exe_171: Cho mảng 1 chiều các số nguyên dương, hãy viết hàm tìm UCLN của tất cả các phần tử có trong mảng
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

int UCLN(int a, int b)
{
	if(a < 0)
		a = -1 * a;
	if(b < 0)
		b = -1 * b;
	if(a == 0 || b == 0)
		return a + b;
	while(a != b)
	{
		if(a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}

int Result(int a[], int n)
{
	int d = UCLN(a[0], a[1]);
	for(int i = 2; i < n; i++)
	{
		if(d == 1)
			return d;
		else
			d = UCLN(d, a[i]);
	}
	return d;
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