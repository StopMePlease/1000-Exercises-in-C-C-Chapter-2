/*
	Exe_295: Liệt kê các dãy con tăng trong mảng
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
	cout << "Cac mang con" << endl;
	int temp;
	for(int i = 0; i < n; i++)
	{
		temp = a[i];
		if(a[i + 1] > a[i])
		{
			cout << a[i] << "\t";
		}
		else
		{
			continue;
		}
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] > temp)
			{
				cout << a[j] << "\t";
				temp = a[j];
			}
			else
			{
				break;
			}
		}
		cout << endl;
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

	return 0;
}