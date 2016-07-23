/*
	Exe_236: Cho 2 mảng a, b. Đếm số lần xuất hiện của mảng a trong mảng b
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
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i] == b[j])
			{
				dem++;
			}
		}
	}
	return dem;
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