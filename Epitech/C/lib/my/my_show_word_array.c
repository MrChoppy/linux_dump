/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** todo : add description for this
*/
#include <stdlib.h>

int my_putstr(char const *str);
void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    for( int i = 0; tab[i] != 0 ; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return (0);
}