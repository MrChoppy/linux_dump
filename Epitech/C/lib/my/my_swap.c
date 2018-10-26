/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swap the pointers values of two variables
*/

void my_swap(int *a, int *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}