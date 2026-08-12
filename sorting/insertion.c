/*
 * Program: Insertion Sort
 * Description: Sorts an array using Insertion Sort.
 * Language: C
 */

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
    int key;

    // Take number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Take array elements
    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for (i = 1; i < n; i++)
    {
        // Store current element
        key = arr[i];

        // Compare with previous elements
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            // Shift element to the right
            arr[j + 1] = arr[j];

            j--;
        }

        // Insert key at correct position
        arr[j + 1] = key;
    }

    // Display sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}