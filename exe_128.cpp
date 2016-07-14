/*
	Viết hàm nhập mảng một chiều các số thực
*/
#include <iostream>

using namespace std;

int main()
{
	int n;
	double a[100];
	cout << "Input n: ";
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}

	return 0;
}
