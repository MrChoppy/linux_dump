/*
** EPITECH PROJECT, 2018
** my_strlowcase.c
** File description:
** todo : description of this
*/

char *my_strlowcase(char *str)
{
    int size = my_strlen(str);
    char up[size];
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] > 64 && str[i] < 91)
            up[i] = str[i] + ( 'a' - 'A');
        else 
            up[i] = str[i];
    }
    up[i] = '\0';
    str = up;
    return (str);
}