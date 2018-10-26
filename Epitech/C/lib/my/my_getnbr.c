/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** print the first occurence of a number passed as string
*/
int check_max_min(long buffer);
int is_negative(char c, int started, int negative);

int is_negative(char c, int started, int negative)
{   
    if (negative != 0)
        return negative;
    if (c == '-' && !started)
        return (1);
    return (0);
}

int check_max_min(long buffer)
{
    if (buffer > 2147483647 || buffer < -2147483648)
        return (0);
    return ((int)buffer);
}

int my_getnbr(char const *str)
{
    int length = my_strlen(str);
    int started = 0;
    int negative = 0;
    long buffer = 0;

    for (int i = 0; i < length; i++) {
        if (str[i] > '0' && str[i] < '9' ) {
            negative = is_negative(str[i-1], started, negative);
            started = 1;
            buffer = buffer * 10 + (str[i] - '0');
        }
        if (started == 1 && (str[i + 1] < '0' || str[i + 1] > '9')) {
            buffer *= negative == 1 ? -1 : 1;
            return (check_max_min(buffer));
        }
    }
    return (0);
}