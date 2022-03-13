#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp) /*3*/
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n-1; i++) /*n*/
	{
		swapped = false; /*n*/
		for (j = 0; j < n-i-1; j++) /*n^2*/
		{
			if (arr[j] > arr[j+1]) /*n^2*/

			{

				swap(&arr[j], &arr[j+1]); /*n^2*/
				swapped = true;	 /*n^2*/
			}
		}

		// IF no two elements were swapped by inner loop, then break
		if (swapped == false) /*n*/
			break;
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++) /*n*/
		printf("%d ", arr[i]); /*n*/
	printf("n");/*1*/
}

// Driver program to test above functions
int main()
{
	int arr[] = {64, 34, 25, 12, 22, 11, 90}; /*1*/
	int n = sizeof(arr)/sizeof(arr[0]); /*1*/
	bubbleSort(arr, n);/*1*/
	printf("Sorted array: \n"); /*1*/
	printArray(arr, n); /*1*/
	return 0;
}

