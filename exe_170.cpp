/*
	Exe_170: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm số nguyên tố nhỏ nhất lớn hơn mọi giá trị có trong mảng
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

int Result(int a[], int n)
{
	int max = a[0];
	for(int i = 1; i < max; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	if(Check(max))
	{
		return max;
	}

	for(int i = max + 1;;i++)
	{
		if(Check(i))
		{
			max = i;
			return max;
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
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}