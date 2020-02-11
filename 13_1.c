
int *address_of_smallest_value(int *numbers, int size)
{
    int min[1];
    int c;
    min[0] = numbers[0];

    for (c = 1; c < size; c++)
    {
        if (numbers[c] < min[0])
        {
            min[0] = numbers[c];
        }
    }
    return min;
}
