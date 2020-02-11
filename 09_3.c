#include <stdio.h>

int main(void)
{
    char *mata_txt = "mata.txt";
    char *matb_txt = "matb.txt";
    char *sum = "sum.usr";

    int i;
    int j;
    int mata[10][10];
    int matb[10][10];
    int summ[10][10];

    /* matrix a */
    FILE *read1;
    read1 = fopen("mata.txt", "r");

    if ((read1 = fopen("mata.txt", "r")) == NULL)
    {
        printf("Failed to open the file %s\n", mata_txt);
        return 0;
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (j == 10)
                {
                    fscanf(read1, "%d", &mata[i][j]);
                }
                else
                {
                    fscanf(read1, "%d ", &mata[i][j]);
                }
            }
        }
        fclose(read1);
    }

    /* matrix b */
    FILE *read2;
    read2 = fopen("matb.txt", "r");

    if ((read2 = fopen("matb.txt", "r")) == NULL)
    {
        printf("Failed to open the file %s\n", matb_txt);
        return 0;
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (j == 10)
                {
                    fscanf(read2, "%d", &matb[i][j]);
                }
                else
                {
                    fscanf(read2, "%d ", &matb[i][j]);
                }
            }
        }
        fclose(read2);
    }

    /* matrix sum */
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            summ[i][j] = 0;
            summ[i][j] = mata[i][j] + matb[i][j];
        }
    }
    FILE *write;
    write = fopen("sum.usr", "w");

    if ((write = fopen("sum.usr", "w")) == NULL)
    {
        printf("Failed to open the file %s\n", sum);
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                if (j == 10)
                {
                    fprintf(write, "%d\n", summ[i][j]);
                }
                else
                {
                    fprintf(write, "%d ", summ[i][j]);
                }
            }
        }
        fclose(write);
        printf("The sum of the matrices has been calculated into the file sum.usr.");
    }

    return 0;
}