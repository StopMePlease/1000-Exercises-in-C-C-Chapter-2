/*
	Exe_291: Biến đồi mảng bằng cách thay giá trị max = min và ngược lại
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
	int max = a[0];
	int min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min = a[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			a[i] = min;
		}
		else if(a[i] == min)
		{
			a[i] = max;
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
	Result(a, n);
	Output(a, n);

	return 0;
}