﻿/*
	Exe_310: Cho mảng thực a. Hãy tạo mảng b, sao cho b chứa các số nguyên tố trong a
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

void Result(int a[], int n)
{
	int b[100];
	int k = 0;
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			b[k] = a[i];
			k++;
		}
	
	}
	Output(b, k);
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
	
	return 0;
}