/*
	Exe_287: Hãy "dịch phải xoay vòng" k lần các phần tử trong mảng
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

void Result(int a[], int n)
{
	int temp = a[n - 1];
	for(int i = n - 1; i >= 0; i--)
	{		
		a[i] = a[i - 1];
	}
	a[0] = temp;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	
	Input(a, n);
	Output(a, n);
	Result(a, n);
	Output(a, n);

	return 0;
}