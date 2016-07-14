/*
	Exe_136: Tìm số chẵn cuối cùng trong mảng một chiều các số thực. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

int Result(int a[], int n)
{
	for(int i = n - 1; i >= 0; i--)
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