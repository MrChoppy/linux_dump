/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** revert a string passed as parameter
*/
int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int size = my_strlen(str);
    char revert[size];

    for ( int i = 0; i <= size; i++)
        revert[i] = str[size - 1 - i];
    str = revert;
    return (str);
}