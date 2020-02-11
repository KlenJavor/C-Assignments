#include <stdio.h>
int main()
{
    int i;
    int j = 0;
    FILE *read_file;
    char phonedir[] = "phonedir.txt";

    struct person
    {
        char firstname[15];
        char lastname[25];
        char number[25];
    };

    struct person person_list;
    read_file = fopen(phonedir, "r");

    if ((read_file = fopen(phonedir, "r")) == NULL)
    {
        printf("Error opening file.");
        return 0;
    }
    else
    {
        fscanf(read_file, "%d\n", &j);

        for (i = 0; i < j; i++)
        {
            fscanf(read_file, "%s %s %s\n", person_list.firstname,
                   person_list.lastname, person_list.number);
            printf("%s %s %s\n", person_list.firstname,
                   person_list.lastname, person_list.number);
        }
    }

    fclose(read_file);

    return 0;
}