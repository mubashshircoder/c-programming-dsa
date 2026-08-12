/*
 * Program: Merge Sort
 * Description: Sorts an array using Merge Sort.
 * Language: C
 */

#include <stdio.h>

// Merge two sorted parts
void merge(int arr[], int left, int mid, int right)
{
    int temp[100];

    int i = left;
    int j = mid + 1;
    int k = left;

    // Compare elements from both halves
    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements from left half
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy sorted elements back to original array
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
}

// Merge Sort function
void mergeSort(int arr[], int left, int right)
{
    int mid;

    // Continue until only one element remains
    if (left < right)
    {
        mid = (left + right) / 2;

        // Sort left half
        mergeSort(arr, left, mid);

        // Sort right half
        mergeSort(arr, mid + 1, right);

        // Merge both halves
        merge(arr, left, mid, right);
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

    // Call Merge Sort
    mergeSort(arr, 0, n - 1);

    // Display sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}