/*
	Exe_237: Hãy tìm 1 giá trị có số lần xuất hiện nhiều nhất trong mảng nguyên
*/
#include <iostream>
#include <cmath>

using namespace std;

void Input(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}

void Output(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

void Result(int a[], int n)
{
	int check;
	int dem;
	int max_dem = 0;

	for(int i = 0; i < n; i++)
	{
		check = 0;
		dem = 1;
		for(int j = i - 1; j >= 0; j--)
		{
			if(a[j] == a[i])
			{
				check = 1;
				break;
			}
		}
		if(check == 1)
		{
			continue;
		}

		for(int k = i + 1; k < n; k++)
		{
			if(a[k] == a[i])
			{
				dem++;
			}
		}

		if(dem > max_dem)
		{
			max_dem = dem;
		}
	}

	for(int i = 0; i < n; i++)
	{
		check = 0;
		dem = 1;
		for(int j = i - 1; j >= 0; j--)
		{
			if(a[j] == a[i])
			{
				check = 1;
				break;
			}
		}
		if(check == 1)
		{
			continue;
		}

		for(int k = i + 1; k < n; k++)
		{
			if(a[k] == a[i])
			{
				dem++;
			}
		}

		if(dem == max_dem)
		{
			cout << a[i] << "\t";
		}
	}
}

int main()
{
	int a[100];
	int n;
	cout << "Input n: ";
	cin >> n;
	Input(a, n);
	Output(a, n);

	Result(a, n);
	
	
	return 0;
}