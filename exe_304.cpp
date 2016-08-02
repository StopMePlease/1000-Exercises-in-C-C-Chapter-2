/*
	Exe_304: Cho mảng nguyên và 1 số nguyên m. Tìm mảng con sao cho tổng các phần tử trong mảng = m
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

void Result(int a[], int n, int m)
{
	int start, finish;
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		start = i;
		finish = i;
		if(a[i] == m)
		{
			cout << a[i] << endl;
		}
		else
		{
			start = i;
			sum += a[i];
			for(int j = i + 1; j < n; j++)
			{
				sum += a[j];
				if(sum == m)
				{
					finish = j;
					break;
				}
			}
			if(start != finish)
			{
				for(int k = start; k <= finish; k++)
				{
					cout << a[k] << "   ";	
				}
				cout << endl;
			}
		}
	}
}

int main()
{
	int a[100];
	int n, m;
	cout << "Input n: ";
	cin >> n;
	cout << "Input m: ";
	cin >> m;

	Input(a, n);
	Output(a, n);
	Result(a, n, m);	
	
	return 0;
}