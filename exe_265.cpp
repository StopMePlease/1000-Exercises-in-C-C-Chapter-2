/*
	Exe_265: Trộn 2 mảng tăng dần thành 1 mảng được sắp thứ tự giảm dần
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

void Input2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "b[" << i << "]: ";
		cin >> b[i];
	}
}

void Output2(int b[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << b[i] << "      ";
	}
	cout << endl;
}

void Swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Result(int a[], int n, int b[], int m, int c[], int &k)
{
	k = n + m;
	for(int i = 0; i < n; i++)
	{
		c[i] = a[i];
	}

	int x = 0;
	for(int i = n; i < k; i++)
	{
		c[i] = b[x];
		x++;
	}

	for(int i = 0; i < k; i++)
	{
		for(int j = i; j < k; j++)
		{
			if(c[i] < c[j])
			{
				Swap(c[i], c[j]);
			}
		}
	}

	for(int i = 0; i < k; i++)
	{
		cout << c[i] << "\t";
	}
}

int main()
{
	int a[100], b[100], c[100];
	int n, m, k = 0;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	cout << "Input m: ";
	cin >> m;
	Input2(b, m);
	Output2(b, m);

	Result(a, n, b, m, c, k);

	return 0;
}