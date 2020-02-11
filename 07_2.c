#include <stdio.h>

void plus(void);
void minus(void);
void times(void);

int main()
{
    int choice;

    do
    {

        printf("1: sum of two numbers\n2: difference of two numbers\n3: product of two numbers\n");
        printf("<0: terminate the program\n");
        printf("Select calculation:");
        scanf("%d", &choice);

        if (choice < 0)
        {
            printf("Terminating the program...");
        }
        else if (choice == 1)
        {
            plus();
        }
        else if (choice == 2)
        {
            minus();
        }
        else if (choice == 3)
        {
            times();
        }
        else
        {
            printf("You entered an invalid number.\n\n");
        }
    } while (choice > 0);
    return 0;
}

void plus(void)
{
    int first;
    int second;
    int sum;

    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);

    sum = first + second;
    printf("%d + %d = %d\n\n", first, second, sum);
}

void minus(void)
{
    int first;
    int second;
    int diff;

    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);

    diff = first - second;
    printf("%d - %d = %d\n\n", first, second, diff);
}

void times(void)
{
    int first;
    int second;
    int prod;

    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);

    prod = first * second;
    printf("%d * %d = %d\n\n", first, second, prod);
}
