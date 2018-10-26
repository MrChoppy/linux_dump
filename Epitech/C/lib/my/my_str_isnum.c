/*
** EPITECH PROJECT, 2018
** my_isnum.c
** File description:
** revert a string passed as parameter
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= '0' && str[i] <= '9'))
            return (0);
    return (1);
}