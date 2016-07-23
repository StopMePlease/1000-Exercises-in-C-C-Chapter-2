/*
	Exe_235: Cho 2 mảng a, b. Liệt kê các giá trị chỉ xuất hiện một trong 2 mảng
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

void Result(int a[], int b[], int n, int m)
{
	int check;
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
			cout << a[i] << endl;
		}
	}

	for(int i = 0; i < m; i++)
	{
		check = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[j] == b[i])
			{
				check = 1;
				break;
			}
		}
		if(check == 0)
		{
			cout << b[i] << endl;
		}
	}
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

	Result(a, b, n, m);
	
	return 0;
}