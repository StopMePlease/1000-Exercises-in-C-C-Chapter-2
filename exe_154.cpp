/*
	Exe_154: Tìm "vị trí giá trị âm lớn nhất" trong mảng 1 chiều các số thực. Nếu không có trả về -1
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
			vt = i;
		}
	}
	return vt;
}

int main()
{
	double a[100];
	int n;	
	int kq = Result(a, n);
	cout << kq;

	return 0;
}