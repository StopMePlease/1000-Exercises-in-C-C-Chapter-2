/*
	Exe_253: CHo biết tất cả các phần tử trong mảng a có trong mảng b hay không?
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

void Input2(int b[], int m)
{
	for(int i = 0; i < m; i++)
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

void Output2(int b[], int m)
{
	for(int i = 0; i < m; i++)
	{
		cout << b[i] << "      ";
	}
	cout << endl;
}

int Result(int a[], int b[], int n, int m)
{
	int check;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		check = 0;
		for(int j = 0; j < m; j++)
		{
			if(a[i] == b[j])
			{
				check = 1;
				break;
			}
		}
		if(check == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int a[100], b[100];
	int n, m;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	cout << "Input m: ";
	cin >> m;
	Input2(b, m);
	Output2(b, m);

	int kq = Result(a, b, n, m);
	cout << kq;
	
	return 0;
}