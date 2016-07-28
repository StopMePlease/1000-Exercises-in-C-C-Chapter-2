/*
	Exe_281: Đưa các số chẵn trong mảng về đầu mảng, số lẻ về cuối mảng các phần tử 0 nằm ở giữa
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
	int check = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] % 2 == 0)
				{
					swap(a[i], a[j]);					
				}
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] % 2 == 0 && a[j] != 0)
				{
					swap(a[i], a[j]);
				}
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