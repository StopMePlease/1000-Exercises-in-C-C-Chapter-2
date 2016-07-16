/*
	Exe_146: Tìm "giá trị âm đầu tiên" trong mảng 1 chiều các số thực. Nếu không có trả về 1
*/
#include <iostream>

using namespace std;

double Result(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			return a[i];
		}
	}
	return 1;
}
int main()
{
	double a[100];
	int n;	
	double kq = Result(a, n);
	cout << kq;

	return 0;
}