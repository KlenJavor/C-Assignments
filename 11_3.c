#include <stdio.h>
#include <string.h>

int main()
{
    /*1. Read file into an array*/
    char string[5][100];
    char line[100];
    int i;
    i = 0;
    int size;
    FILE *read_file;
    char phonedir[] = "phonedir.txt";

    read_file = fopen(phonedir, "r");

    if ((read_file = fopen(phonedir, "r")) == NULL)
    {
        printf("Error opening file.");
        return 0;
    }
    else
    {

        while (fgets(line, sizeof line, read_file) != NULL)
        {
            strcpy(string[i], line);
            i++;
        }
        size = i;
    }
    fclose(read_file);

    /*test reading file into an array*/

    //for (i = 0; i < 5; i++)
    //    {
    //        printf("%s", string[i]);
    //    }

    /*Ask user for an input*/

    char firstname[15];
    char lastname[25];

    printf("Enter first name:");
    scanf("%s", &firstname[0]);
    printf("Enter last name:");
    scanf("%s", &lastname[0]);

    /*test user´s input*/

    // printf("%s %s", firstname, lastname);

    /*Look up and delete the line in an array*/

    int c;
    c = 0;

    for (c = 0; c < size; c++)
    {
        if (strstr(string[c], lastname) != NULL && strstr(string[c], firstname) != NULL)

        {

            for (c; c < size; c++)
                strcpy(string[c], string[c + 1]);
        }
    }
    int newsize;
    newsize = size - 3;
    char newsizech[1];
    sprintf(newsizech, "%d\n", newsize);
    strcpy(string[0], newsizech);

    /*test new content of an array*/

    //for (i = 0; i < 5; i++)
    //{
    //    printf("%s", string[i]);
    //}

    /*Write the array to the file*/

    FILE *write_file;

    write_file = fopen(phonedir, "w");
    if ((write_file = fopen(phonedir, "w")) == NULL)
    {
        printf("Error opening file.");
        return 0;
    }
    else
    {
        for (i = 0; i < 5; i++)
        {
            fprintf("%s", string[i]);
        }
    }
    fclose(write_file);

    printf("Data removed from the directory.");
    return 0;
}