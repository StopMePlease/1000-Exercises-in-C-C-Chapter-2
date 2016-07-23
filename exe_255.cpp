/*
	Exe_255: Sắp xếp mảng tăng
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

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(a[i] > a[j])
			{
				Swap(a[i], a[j]);
			}
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