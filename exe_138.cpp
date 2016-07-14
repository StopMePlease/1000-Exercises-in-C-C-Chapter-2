/*
	Exe_138: Tìm "vị trí của giá trị chẵn đầu tiên" trong mảng 1 chiều các số nguyên. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

int Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
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
	int kq = Result(a, n);
	cout << kq;

	return 0;
}