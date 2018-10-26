/*
** EPITECH PROJECT, 2018
** my_strcapitalize.c
** File description:
** capitalize a string passed as param
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    str[0] -= *str >= 'a' && *str <= 'z' ? 'a' - 'A' : 0;
    while (str[i] != '\0') {
        if (str [i] == ' ')
            str[i+1] = str[i+1] - ('a' - 'A');
        i++;
        if (str [i -1] > '/' && str[i] >= 'A' && str[i] <= 'Z') 
            str[i] += 32;
    }
    return (str);
}