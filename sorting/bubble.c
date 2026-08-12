/*
 * Program: Bubble Sort
 * Description: Sorts an array using Bubble Sort.
 * Language: C
 */

#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i, j;
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

    // Bubble Sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // Swap if elements are in wrong order
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Sorted array:\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}