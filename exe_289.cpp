/*
	Exe_289: Xuất các phần tử mảng theo yêu cầu: chẵn nằm trên, lẻ nằm dưới
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
	int b[100], c[100];
	int k = 0, m = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			b[k] = a[i];
			k++;
		}
		else if(a[i] % 2 != 0)
		{
			c[m] = a[i];
			m++;
		}
	}

	Output(b, k);
	Output(c, m);
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