/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** print a str passed as parameter
*/

int my_putstr(char const *str)
{
    for(int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    return (0);
}
