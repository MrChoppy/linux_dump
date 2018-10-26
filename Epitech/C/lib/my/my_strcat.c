/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** revert a string passed as parameter
*/
int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int dest_length = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_length + i] = src[i];
    dest[dest_length + i] = '\0';
    return (dest);
}

