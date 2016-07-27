/*
	Exe_279: Xóa tất cả các phần tử có tần số xuất hiện nhiều hơn 1 lần
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

void Result(int a[], int &n)
{
	int check;
	int dem;
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

		if(dem > 1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] == a[i])
				{
					for(int k = j; k < n; k++)
					{
						a[k] = a[k + 1];
					}
					n--;
					j--;
				}
			}

			for(int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			i--;
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
	Output(a, n);

	return 0;
}