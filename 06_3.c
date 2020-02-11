#include <stdio.h>

int main()
{
    int i = 0;
    float sum = 0.0;
    float average;
    float x = 0.0;
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");

    while (1)
    {
        printf("Enter score (4-10):");
        scanf("%f", &x);
        if (x < 0)
            break;

        sum += x;
        i++;
    }
    average = sum / i;
    printf("You entered %d scores.\n", i);
    printf("Average score: %.2f\n", average);
    return 0;
}