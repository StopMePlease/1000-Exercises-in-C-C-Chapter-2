/*
	Exe_147: Tìm "số dương cuối cùng" trong mảng 1 chiều các số nguyên. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

int Result(int a[], int n)
{
	for(int i = n - 1; i > 0; i--)
	{
		if(a[i] > 0)
		{
			return a[i];
		}
	}
	return -1;
}
int main()
{
	int a[100];
	int n;	
	double kq = Result(a, n);
	cout << kq;

	return 0;
}