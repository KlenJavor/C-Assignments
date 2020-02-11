#include <stdio.h>
int main()
{
    int i;
    FILE *amend_file;
    char phonedir[] = "phonedir.txt";

    FILE *write_file;
    char phonedir2[] = "phonedir.txt";

    struct person
    {
        char firstname[15];
        char lastname[25];
        char number[25];
    };

    struct person person_list;

    printf("Enter first name:");
    scanf("%s", &person_list.firstname[0]);
    printf("Enter last name:");
    scanf("%s", &person_list.lastname[0]);
    printf("Enter telephone number:");
    scanf("%s", &person_list.number[0]);

    amend_file = fopen(phonedir, "a");

    if ((amend_file = fopen(phonedir, "a")) == NULL)
    {
        printf("Error opening file.");
        return 0;
    }
    else
    {

        fprintf(amend_file, "%s %s %s", person_list.firstname,
                person_list.lastname, person_list.number);
    }

    fclose(amend_file);

    write_file = fopen(phonedir, "w");

    if ((write_file = fopen(phonedir, "w")) == NULL)
    {
        printf("Error opening file.");
        return 0;
    }
    else
    {
        int array;
        int i;

        fscanf(write_file, "%d ", &array);
        i = i + 1;

        fprintf(write_file, "%d", i);
    }

    fclose(write_file);

    printf("Successfully saved the data.");
    return 0;
}