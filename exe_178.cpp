/*
	Exe_178: Hãy liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên thuộc đoạn [x,y] cho trước
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

void Result(int a[], int n,int x,int y)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= y && a[i] >= x && a[i] % 2 == 0)
		{
			cout << a[i] << "\t";
		}
	}
}

int main()
{
	int a[100];
	int n, x, y;
	cout << "Input n: ";
	cin >> n;
	cout << "Input x: ";
	cin >> x;
	cout << "Input y: ";
	cin >> y;
	Input(a, n);
	Output(a, n);
	Result(a, n, x, y);
	
	return 0;
}