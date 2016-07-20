/*
	Exe_194: Cho mảng số nguyên có nhiều hơn hai giá trị, hãy liệt kê cặp giá trị gần nhau nhất trong mảng
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

bool Check(int n)
{
	int check = 1;

	if(n % 2 == 0)
	{
		return false;
	}
	else
	{
		while(true)
		{
			n /= 3;
			if(n % 3 != 0)
			{
				break;
			}
			if( n < 10)
			{
				break;
			}
		}
	}

	if(n == 3 || n == 9)
	{
		check = 0;
	}


	if( check == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Result(int a[], int n)
{
	int vt = 0, vt2 = 1;

	int temp = 0;
	if(a[0] * a[1] > 0)
	{
		temp = abs(a[0]) - abs(a[1]);
		temp = abs(temp);
	}
	else
	{
		temp = abs(a[0]) + abs(a[1]);
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 2; j < n; j++)
		{
			if(a[i] == a[j])
			{
				continue;
			}
			int temp2 = 0;
			if(a[i] * a[j] > 0)
			{
				temp2 = abs(a[i]) - abs(a[j]);
				temp2 = abs(temp2);
			}
			else
			{
				temp2 = abs(a[i]) + abs(a[j]);
			}
			if(temp2 <= temp)
			{
				if(temp == temp2)
				{
					cout << a[i] << ", " << a[j] << endl;
				}
				else
				{
					vt = i;
					vt2 = j;
					temp = temp2;
				}
			}
		}
	}
	cout << a[vt] << ", " << a[vt2];
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