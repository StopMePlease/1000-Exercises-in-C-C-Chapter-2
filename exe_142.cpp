/*
	Exe_142: Tìm "giá trị nhỏ nhất" trong mảng một chiều số thực
*/
#include <iostream>

using namespace std;

double Result(double a[], int n)
{
	double min = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

int main()
{
	double a[100];
	int n;	
	int kq = Result(a, n);
	cout << kq;

	return 0;
}