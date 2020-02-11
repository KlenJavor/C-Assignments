#include <stdio.h>
int main()
{
    char fname[15];
    char sname[20];
    char file1[12];

    printf("The program saves your first and last name into a file.\n");
    printf("Enter your first name:");
    scanf("%s", fname);
    printf("Enter your last name:");
    scanf("%s", sname);
    printf("File where you want to save your name:");
    scanf("%s", file1);

    FILE *opening;
    opening = fopen(file1, "w");

    if (opening == NULL)
    {
        printf("An error occurred when opening the file!");
        return 0;
    }
    else
    {
        fprintf(opening, "%s %s", fname, sname);
    }

    printf("Successfully saved the data!");

    fclose(opening);

    return 0;
}