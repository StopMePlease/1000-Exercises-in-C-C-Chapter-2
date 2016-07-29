/*
	Exe_296: Liệt kê tất cả các mảng con tăng chứa giá trị lớn nhất
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
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}

	cout << "Cac mang con" << endl;
	int temp;
	int b[100];
	int k;
	for(int i = 0; i < n; i++)
	{
		k = 0;
		temp = a[i];
		if(a[i + 1] > a[i])
		{
			b[k] = a[i];
			k++;
		}
		else
		{
			continue;
		}
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] > temp)
			{
				b[k] = a[j];
				temp = a[j];
				k++;
			}
			else
			{
				break;
			}
		}
		for(int m = 0; m < k; m++)
		{
			if(b[m] == max)
			{
				Output(b, k);
			}
		}
		
		cout << endl;
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