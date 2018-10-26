/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** return the length of a string
*/

int my_strlen(char const *str)
{   
    int a;

    for (a = 0; str[a] != '\0'; a++);
    return (a);
}