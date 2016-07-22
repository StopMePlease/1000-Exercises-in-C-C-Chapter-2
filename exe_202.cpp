/*
	Exe_202: Tính tổng các giá trị có chữ số đầu tiên là chữ số lẻ trong mảng 1 chiều các số nguyên
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
	while(n >= 10 )
	{
		n /= 10;
	}
	if(n % 2 != 0)
	{
		return true;
	}
	return false;
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