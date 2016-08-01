﻿/*
	Exe_301: Cho 2 mảng a, b. Cho biết a có phải là mảng con của b hay không?
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

void Input2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
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

void Output2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << b[i] << "      ";
	}
	cout << endl;
}

int Result(int a[], int n, int b[], int m)
{
	if(n > m)
	{
		return -1;
	}

	int k = 0;
	
	while(true)
	{
		int check = 0;
		for(int i = 0; i < m; i++)
		{
			if(a[k] == b[i])
			{
				k++;
				check = 0;
				break;
			}
			else
			{
				check = 1;
			}
		}

		if(check == 1)
		{
			break;
		}

		if(k == n)
		{
			break;
		}
	}	

	if(k == n)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Input n: ";
	cin >> n;
	cout << "Input m: ";
	cin >> m;
	Input(a, n);
	Output(a, n);
	Input2(b, m);
	Output2(b, m);
	int kq = Result(a, n, b, m);	
	cout << kq;

	return 0;
}