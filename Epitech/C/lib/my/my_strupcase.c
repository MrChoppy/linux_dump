/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** revert a string passed as parameter
*/
int my_strlen(char const *str);

char *my_strupcase(char *str)
{
    int size = my_strlen(str);
    char up[size];
    int i = 0;

    for(; str[i] != '\0'; i++) {
        if (str[i] > 97 && str[i] < 123)
            up[i] = str[i] - ( 'a' - 'A');
        else 
            up[i] = str[i];
    }
    up[i] = '\0';
    str = up;
    return (str);
}