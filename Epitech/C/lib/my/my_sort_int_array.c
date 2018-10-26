/*
** EPITECH PROJECT, 2018
** my_sort_int_array.c
** File description:
** sort an int array
*/
void swap_array(int *array, int a, int b);

void swap_array(int *array, int a, int b)
{
    int c = array[a];
    array[a] = array[b];
    array[b] = c;
}

void my_sort_int_array(int *array, int size)
{
    
    int min;
    int *pointer = array;
    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
            swap_array(pointer, min, i);
        }
    }
}
