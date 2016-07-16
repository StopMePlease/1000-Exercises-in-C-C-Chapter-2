/*
	Exe_150: Tìm "giá trị âm lớn nhất" trong mảng 1 chiều các số thực. Nếu không có trả về 0
*/
#include <iostream>

using namespace std;

double Result(double a[], int n)
{
	int vt = -1;
	double min = 0;
	for(int i = 0; i < n ; i++)
	{
		if(a[i] < 0)
		{
			vt = i;
			min = a[i];
			break;
		}
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(a[i] < 0 && a[i] < min)
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
	double kq = Result(a, n);
	cout << kq;

	return 0;
}
