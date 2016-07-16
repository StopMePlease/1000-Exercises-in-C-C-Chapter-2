/*
	Exe_153: Tìm "giá trị chẵn nhỏ nhất" trong mảng 1 chiều các số nguyên. Nếu không có trả về -1
*/
#include <iostream>

using namespace std;

int Result(int a[], int n)
{
	int vt = -1;
	int sum = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
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
		if(a[i] % 2 == 0 && a[i] < sum)
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