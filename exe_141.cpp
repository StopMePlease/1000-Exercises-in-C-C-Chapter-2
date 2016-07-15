/*
	Exe_141: Tìm "vị trí của giá trị dương nhỏ nhất" trong mảng 1 chiều các số thực. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

double Result(double a[], int n)
{
	int vt = -1;
	int rs = -1;
	double sum = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			vt = i;
			sum = a[i];
			break;
		}
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(a[i] < sum && a[i] > 0)
		{
			sum = a[i];
			rs = i;
		}
	}
	return rs;
}

int main()
{
	double a[100];
	int n;	
	int kq = Result(a, n);
	cout << kq;

	return 0;
}