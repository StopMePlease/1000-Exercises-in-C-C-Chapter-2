/*
	Exe_134: Viết hàm tìm giá trị lớn nhất trong mảng 1 chiều các số thực
*/
#include <iostream>

using namespace std;

double Result(double a[], int n)
{
	double max = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

int main()
{
	double a[100];
	int n;	
	double kq = Result(a, n);
	cout << kq;

	return 0;
}