/*
	Exe_157: Cho mảng 1 chiều các số thực hãy tìm đoạn [a, b] sao cho đoạn này chứa tất cả các giá trị trong mảng
*/
#include <iostream>

using namespace std;

void Input(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

void Result(double a[], int n)
{
	double min = a[0];
	double max = a[0];

	for(int i = 1; i < n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	cout << "[" << min << "," << max << "]";
}

int main()
{
	double a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);
	Result(a, n);

	return 0;
}