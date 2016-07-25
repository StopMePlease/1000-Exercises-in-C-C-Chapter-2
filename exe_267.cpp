/*
	Exe_267: Viết hàm nhập mảng thưcc sao cho khi mảng nhập xong các giá trị trong mảng đã được sắp xếp(không sắ xếp sau khi nhập.
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
	for(int i = 1; i < n; i++)
	{
		cout << a[i] << "      ";
	}
	cout << endl;
}

void Result(int a[], int n)
{
	int i = 0;
	while(i < n)
	{
		int x;
		cout << "Input x: ";
		cin >> x;
		
		a[i] = x;
		i++;
		for(int j = 0; j < i; j++)
		{
			for(int k = j; k < i; k++)
			{
				if(a[j] > a[k])
				{
					swap(a[j], a[k]);
				}
			}
		}
	}
}

int main()
{
	int a[100];
	int n = 0;
	cout << "Input n: ";
	cin >> n;
	Result(a, n);
	Output(a, n);

	return 0;
}