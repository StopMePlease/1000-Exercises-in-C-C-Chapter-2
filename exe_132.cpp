/*
	Viết hàm liệt kê các giá trị chẵn trong mảng 1 chiều các số nguyên
*/
#include <iostream>

using namespace std;

void Result(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			cout << a[i] << "\t";
		}
	}
}

int main()
{
	int a[100] = {1, 2, 3, 4, 5}, n;
	n = 5;
	
	Result(a, n);
	return 0;
}