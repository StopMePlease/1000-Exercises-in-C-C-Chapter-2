/*
	Exe_137: Tim "một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất" trong mảng số thực
*/
#include <iostream>

using namespace std;

int Result(double a[], int n)
{
	int min = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < a[min])
		{
			min = i;
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