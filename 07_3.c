#include <stdio.h>

int largest(int f, int s, int t);
int smallest(int f, int s, int t);

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter the 1. number:");
    scanf("%d", &num1);
    printf("Enter the 2. number:");
    scanf("%d", &num2);
    printf("Enter the 3. number:");
    scanf("%d", &num3);

    largest(num1, num2, num3);
    smallest(num1, num2, num3);

    return 0;
}

int largest(num1, num2, num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("Among the numbers you entered,\nthe largest was %d", num1);
    }
    else if (num2 > num3)
    {

        printf("\nAmong the numbers you entered,\nthe largest was %d", num2);
    }
    else
    {
        printf("\nAmong the numbers you entered,\nthe largest was %d", num3);
    }
}

int smallest(num1, num2, num3)
{
    if (num1 < num2 && num1 < num3)
    {
        printf(" and the smallest was %d.", num1);
    }
    else if (num2 < num3)
    {

        printf(" and the smallest was %d.", num2);
    }
    else
    {
        printf(" and the smallest was %d.", num3);
    }
}
