/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** return 1 if string passed as param is printable
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= ' ' && str[i] <= '~'))
            return (0);
    return (1);
}