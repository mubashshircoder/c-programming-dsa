#include <stdio.h>

// Function to add two numbers
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Calling the function
    result = add(x, y);

    printf("Sum = %d", result);

    return 0;
}