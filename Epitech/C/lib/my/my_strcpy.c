/*
** EPITECH PROJECT, 2018
** my_strcpy.c
** File description:
** copy the content of a string in another string
*/

char *my_strcpy(char *dest, const char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}