/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** todo: comment this
*/

int my_strcmp(char const *s1, char const *s2)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (*p1 != '\0') {
        if (*p2 == '\0')
            return 1;
        else if (*p2 > *p1)
            return -1;
        else if (*p2 < *p1)
            return 1;
        p1++;
        p2++;
    }
    if (*p2 != '\0')
        return -1;

    return 0;
}