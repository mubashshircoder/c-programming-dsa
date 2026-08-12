#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, choice, position, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n--- Array Operations ---\n");
    printf("1. Display\n");
    printf("2. Insert\n");
    printf("3. Delete\n");
    printf("4. Search\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Display
    if (choice == 1)
    {
        printf("Array elements: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    // Insert
    else if (choice == 2)
    {
        printf("Enter position: ");
        scanf("%d", &position);

        printf("Enter value: ");
        scanf("%d", &value);

        // Shift elements to the right
        for (i = n; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[position - 1] = value;
        n++;

        printf("Array after insertion: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    // Delete
    else if (choice == 3)
    {
        printf("Enter position to delete: ");
        scanf("%d", &position);

        // Shift elements to the left
        for (i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Array after deletion: ");

        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    // Search
    else if (choice == 4)
    {
        int key, found = 0;

        printf("Enter element to search: ");
        scanf("%d", &key);

        for (i = 0; i < n; i++)
        {
            if (arr[i] == key)
            {
                printf("Element found at position %d\n", i + 1);
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Element not found.\n");
        }
    }

    else
    {
        printf("Invalid choice.");
    }

    return 0;
}