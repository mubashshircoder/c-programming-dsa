/*
 * Program: Quick Sort
 * Description: Sorts an array using Quick Sort.
 * Language: C
 */

#include <stdio.h>

// Partition the array
int partition(int arr[], int low, int high)
{
    int pivot;
    int i;
    int j;
    int temp;

    // Choose last element as pivot
    pivot = arr[high];

    i = low - 1;

    // Compare elements with pivot
    for (j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;

            // Swap elements
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Put pivot in correct position
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    int pivotIndex;

    if (low < high)
    {
        // Find pivot position
        pivotIndex = partition(arr, low, high);

        // Sort left part
        quickSort(arr, low, pivotIndex - 1);

        // Sort right part
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int arr[100];
    int n;
    int i;

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Call Quick Sort
    quickSort(arr, 0, n - 1);

    // Display sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}