/*
** EPITECH PROJECT, 2018
** my_strncpy.c
** File description:
** copy the string and return it, with a size param
*/

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;

    for (i = 0 ;i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    if (i == n)
        dest[i] = '\0';
    return (dest);
}