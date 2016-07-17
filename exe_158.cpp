/*
	Exe_158: Cho mảng 1 chiều các số thực hãy tìm giá trị x sao cho [-x,x] chứa tất cả các giá trị trong mảng
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
	double max = a[0];

	for(int i = 1; i < n ; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	cout << "[-" << max << "," << max << "]";
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