/*
	Exe_276: Xóa tất cả các phần tử có giá trị trùng với x
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

void Result(int a[], int &n, int x)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			for(int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}
}

int main()
{
	int a[100];
	int n, x;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	Input(a, n);
	Output(a, n);
	Result(a, n, x);
	Output(a, n);

	return 0;
}