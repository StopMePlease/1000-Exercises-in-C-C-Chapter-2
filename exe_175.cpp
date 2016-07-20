/*
	Exe_175: Cho mảng số thực nhiều hơn 2 vị trí và các giá trị trong mảng khác nhau từng đôi một. Hãy viết hàm 2 giá trị gần nhau nhất trong mảng
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