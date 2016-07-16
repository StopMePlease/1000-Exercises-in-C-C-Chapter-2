/*
	Exe_151: Tìm "số nguyên tố lớn nhất" trong mảng 1 chiều các số nguyên. Nếu không có trả về 0
*/
#include <iostream>

using namespace std;

bool Check(int n)
{
	if(n == 2)
	{
		return true;
	}

	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
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

	for(int i = vt + 1; i < n; i++)
	{
		if(Check(a[i]) && a[i] > sum)
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