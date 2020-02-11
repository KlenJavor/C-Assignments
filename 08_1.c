#include <stdio.h>

int main()
{
    float hours[30];
    float total = 0;
    int day;
    int i;
    float avg;
    int j;

    printf("The program calculates the total hours worked during\na specific period and the average length of a day.\n");
    printf("How many days: ");
    scanf("%d", &day);

    for (i = 0; i < day; i++)
    {
        printf("Enter the working hours for day %d:", i + 1);
        scanf("%f", &hours[i]);
        total += hours[i];
    }

    avg = total / day;

    printf("Total hours worked: %.1f\n", total);
    printf("Average length of day: %.1f\n", avg);
    printf("Hours entered:");

    for (j = 0; j < day; j++)
    {
        printf("%.1f\t", hours[j]);
    }

    return 0;
}