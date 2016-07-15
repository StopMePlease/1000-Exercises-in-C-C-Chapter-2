/*
	Exe_140: Tìm "giá trị dương nhỏ nhất" trong mảng 1 chiều các số thực. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

int Result(int a[], int n)
{
	int vt = -1;
	int sum = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0)
		{
			vt = i;
			sum = a[i];
			break;
		}
	}

	for(int i = vt; i < n; i++)
	{
		if(a[i] < sum && a[i] > 0)
		{
			sum = a[i];
		}
	}
	return sum;
}

int main()
{
	int a[100];
	int n;	
	int kq = Result(a, n);
	cout << kq;

	return 0;
}