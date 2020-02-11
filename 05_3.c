#include <stdio.h>

int main()
{
    int operator;
    int first, second;
    printf("1: subtraction\n");
    printf("2: addition\n");
    printf("3: multiplication\n");
    printf("Select function:");
    scanf("%d", &operator);
    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);

    switch (operator)
    {
    case 1:
        printf("%d-%d=%d", first, second, first - second);
        break;
    case 2:
        printf("%d+%d=%d", first, second, first + second);
        break;
    case 3:
        printf("%d*%d=%d", first, second, first * second);
        break;

    default:
        printf("Error! operator is not correct");
    }
    return 0;
}