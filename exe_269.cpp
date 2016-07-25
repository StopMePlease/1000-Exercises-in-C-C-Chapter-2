/*
	Exe_269: Thêm 1 giá trị x vào trong mảng tăng mà vẫn giữ nguyên tình chất đơn điệu của mảng
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
		Output(a, i);
	}
}

int main()
{
	int a[100];
	int n = 0;
	cout << "Input n: ";
	cin >> n;
	Result(a, n);

	return 0;
}