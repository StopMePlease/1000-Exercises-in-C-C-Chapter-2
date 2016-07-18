/*
	Exe_169: Cho mảng 1 chiều các số nguyên, hãy viết hàm tìm số chẵn lớn nhất nhỏ hơn mọi giá trị lẻ có trong mảng
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

int Result(int a[], int n)
{
	int min = 0;
	int max = 0;
	int vt = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			min = a[i];
			vt = i;
			break;
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			max = a[i];
			break;
		}
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(a[i] % 2 != 0 && a[i] < min)
		{
			min = a[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 && a[i] < min && a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	int kq = Result(a, n);
	cout << kq;
	
	return 0;
}