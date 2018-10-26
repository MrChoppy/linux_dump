/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** revert a string passed as parameter
*/
int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int dest_length = my_strlen(dest);
    int i;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[dest_length + i] = src[i];
    dest[dest_length + i] = '\0';

    return (dest);
}

