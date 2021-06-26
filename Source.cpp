#include<stdio.h>
#include<conio.h>
void selection_sort(int array[], int);
void main()
{
	int arr[] = { 9, 8, 7, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, n);
	printf("Sorted Array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	_getch();
}
void selection_sort(int a[], int n)
{
	int min_index, i, j;			// temporary variable to store the position of minimum element

	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_index])
			{
				int temp = a[j];
				a[j] = a[min_index];
				a[min_index] = temp;
			}
		}
	}
}

// Worst, Average, Best case Time Complexity = O(n^2)
// Space Complexity = O(1)