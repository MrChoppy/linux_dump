/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** return 1 if string passed as param is alpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (!((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
    return (1);
}