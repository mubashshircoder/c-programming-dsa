#include <stdio.h>

int main()
{
    int a, b, greater;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Conditional operator
    greater = (a > b) ? a : b;

    printf("Greater number = %d", greater);

    return 0;
}