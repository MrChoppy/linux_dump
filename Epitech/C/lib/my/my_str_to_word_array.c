/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** explode a string to array
*/
#include <string.h>
#include <stdlib.h>

char *word(char const *str, int *compter);
int count_words (char const *str);
int my_char_isalpha(char c);
char *my_substring(char *dest, const char *src, int start,int n);

int my_char_isalpha(char c)
{
    if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || 
        (c >= '0' && c<= '9')))
        return (0);
    return (1);
}

int count_words(char const *str)
{
    int i = 0;
    int count = 0;

    while (str[i]) {
        if (my_char_isalpha(str[i]) && !(my_char_isalpha(str[i + 1])))
            count++;
        i++;
    }
    return (count);
}

char *word(char const *str, int *compter)
{
    int i = *compter;
    char *word;

    while (str[*compter]) {
        *compter += 1;
        if (!(my_char_isalpha(str[*compter]))) {
            word = malloc(sizeof(char) * ((*compter - i) + 1));
            my_substring(word, str, i, *compter);
            *compter += 1;
            return (word);
        }
    }
    return (NULL);
}

char *my_substring(char *dest, const char *src, int start, int end)
{
    int i;
    int y = 0;

    for (i = start ;i < end && src[i] != '\0'; i++, y++)
        dest[y] = src[i];
    if (i == end)
        dest[y] = '\0';
    return (dest);
}

char **my_str_to_word_array(char const *str)
{
    char **array;
    int words = count_words(str);
    int compter = 0;
    int *p = &compter;
    int i = 0;

    array = malloc ((words + 1) * sizeof (char *));
    while ( i < words) {
        array[i] = word(str, p);
        i++;
    }
    array[i] = 0;
    return (array);
}