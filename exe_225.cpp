/*
	Exe_225: Đếm số lượng các giá trị lớn nhất có trong mảng thực
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
	int dem = 0;
	int max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			dem++;
		}
	}
	return dem;
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