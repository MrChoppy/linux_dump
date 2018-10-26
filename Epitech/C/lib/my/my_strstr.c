/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** revert a string passed as parameter
*/
#include <stdlib.h>

char *my_strstr(char *str, char *to_find)
{
    while (*str) {
        char *start = str;
        char *tf = to_find;

        while (*str && *tf && *str == *tf) {
            str++;
            tf++;
        }
        if (!*tf)
            return start;      
        str = start + 1;
    }
    return (NULL);
}