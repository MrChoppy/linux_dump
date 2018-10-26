/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** return 1 if string passed as param is lowercase
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return (0);
    return (1);
}