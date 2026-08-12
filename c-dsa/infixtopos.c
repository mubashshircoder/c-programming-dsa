#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

// Push element into stack
void push(char ch)
{
    stack[++top] = ch;
}

// Pop element from stack
char pop()
{
    return stack[top--];
}

// Return priority of operator
int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '^')
        return 3;

    return 0;
}

int main()
{
    char infix[100];
    char postfix[100];

    int i = 0;
    int j = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while (infix[i] != '\0')
    {
        ch = infix[i];

        // If operand, directly add to postfix
        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

        // If opening bracket
        else if (ch == '(')
        {
            push(ch);
        }

        // If closing bracket
        else if (ch == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = pop();
            }

            pop(); // Remove '('
        }

        // If operator
        else
        {
            while (top != -1 &&
                   priority(stack[top]) >= priority(ch))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }

        i++;
    }

    // Pop remaining operators
    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    printf("Postfix expression = %s", postfix);

    return 0;
}