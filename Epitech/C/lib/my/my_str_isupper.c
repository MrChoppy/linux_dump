/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** return 1 if string passed as param is uppercase
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
    return (1);
}