/*
 * Program: Selection Sort
 * Description: Sorts an array using Selection Sort.
 * Language: C
 */

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int minIndex;
    int temp;

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for (i = 0; i < n - 1; i++)
    {
        // Assume current element is smallest
        minIndex = i;

        // Find smallest element
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap smallest element with current element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // Display sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}