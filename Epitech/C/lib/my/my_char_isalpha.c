/*
** EPITECH PROJECT, 2018
** my_char_isalpha.c
** File description:
** return 1 if is alphabetic
*/

int my_char_isalpha(char c)
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
        return (0);
    return (1);
}