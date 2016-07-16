/*
	Exe_152: Tìm "số hoàn thiện nhỏ nhất" trong mảng 1 chiều các số nguyên. Nếu không có trả về 0
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
	int vt = -1;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(Check(a[i]))
		{
			sum = a[i];
			vt = i;
			break;
		}
	}

	if(vt == -1)
	{
		return sum;
	}

	for(int i = vt + 1; i < n; i++)
	{
		if(Check(a[i]) && a[i] < sum)
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