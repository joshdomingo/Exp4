#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n, i, j, arr[100], ele;
	cout << "Selection Sorting...\n";
	cout << "Enter the array size: ";
	cin >> n;
	cout << "Enter the " << n << " elements:\n\n";

	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				ele = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = ele;
			}
		}
	}
	cout << "\n\nAfter using bubble sort...";
	cout << "\n\nSorted data: ";
	for (i = 0; i < n; i++)
	{
		cout<< arr[i] << " ";
	}
	_getch();
	return 0;
}

