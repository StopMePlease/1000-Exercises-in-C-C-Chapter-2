/*
	Exe_293: Liệt kê tất cả các mảng con trong mảng 1 chiều các số nguyên
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
	cout << "Cac mang con";
	int num = 0;
	while(num < n)
	{
		cout << a[num] << endl;
		int temp = num + 1;
		while(temp < n)
		{			
			for(int i = num; i < temp; i++)
			{
				cout << a[i] << "   ";
			}
			cout << endl;
			temp++;
		}
		num++;
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
	Output(a, n);

	return 0;
}