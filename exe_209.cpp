/*
	Exe_209: Tính tổng các giá trị đối xứng trong mảng 1 chiều các số nguyên
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
	int n2 = n;
	int sum = 0;

	int c = log10((double)n) ;
	int temp = 10;

	for(int j = 1; j < c; j++)
	{
		temp *= 10;
	}

	for(int i = 1; i < c + 2; i++)
	{
		sum += (n % 10) * temp;
		temp /= 10;
		n /= 10;	
	}

	if(n2 == sum)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Result(int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
			sum += a[i];
	}
	return sum;
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