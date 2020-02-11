#include <stdio.h>
int main()
{
    FILE *opening;
    opening = fopen("numbers.s", "r");

    if (opening == NULL)
    {
        printf("An error occurred when opening the file!");
        return 0;
    }
    else
    {
        int array[4];
        int i;
        int sum;

        for (i = 0; i < 4; i++)
        {
            fscanf(opening, "%d ", &array[i]);
            sum += array[i];
        }

        printf("Numbers found in the file numbers.s:\n");
        printf("%d ,", array[0]);
        printf("%d ,", array[1]);
        printf("%d and ", array[2]);
        printf("%d\n\n", array[3]);
        printf("Sum of the numbers: %d\n", sum);

        fclose(opening);
    }
    return 0;
}