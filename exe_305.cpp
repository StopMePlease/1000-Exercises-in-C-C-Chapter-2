/*
	Exe_305: Tìm dãy con toàn dương có tổng lớn nhất trong mảng 1 chiều các số thực
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
	int temp, temp2 = 0;
	int start, finish;
	for(int i = 0; i < n; i++)
	{
		temp = 0;	
		start = i;
		finish = i;
		if(a[i] > 0 && a[i + 1] > 0)
		{
			temp += a[i];
			start = i;
			for(int j = i + 1; j < n; j++)
			{				
				if(a[j] <= 0)
				{
					finish = j - 1;					
					break;
				}
				temp += a[j];				
			}			
		}
		if(temp > temp2)
		{
			temp2 = temp;
		}
	}

	cout << "Results: ";

	for(int i = 0; i < n; i++)
	{
		temp = 0;		
		if(a[i] > 0 && a[i + 1] > 0)
		{
			temp += a[i];
			start = i;
			for(int j = i + 1; j < n; j++)
			{				
				if(a[j] <= 0)
				{
					finish = j - 1;					
					break;
				}
				temp += a[j];				
			}			
		}
		if(temp == temp2)
		{
			for(int k = start; k <= finish; k++)
			{
				cout << a[k] << "   "; 
			}
			cout << endl;	
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