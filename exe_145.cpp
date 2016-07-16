/*
	Exe_145: Tìm "số hoàn thiện đầu tiên" trong mảng 1 chiều các số nguyên. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

bool Check(int n)
{
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			sum += i;
		}
	}
	return sum == n ? true : false;
}

int Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			return i;
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