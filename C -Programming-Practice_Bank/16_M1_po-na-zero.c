#include <stdio.h>
int main()
{
        // Write a program to check if a number is positive, negative, or zero
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive number \n", a);
    }
    else if (a == 0)
    {
        printf("%d is Zero \n", a);
    }
    else
    {
        printf("%d is negative number \n", a);
    }
    return 0;
}