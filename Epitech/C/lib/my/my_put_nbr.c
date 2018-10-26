/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** display number
*/

int my_put_nbr(int nb)
{
    int i = 0;
    int j = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    i = nb % 10;
    j = nb / 10;
    if (j != 0)
        my_put_nbr(j);
    my_putchar(i + 48);
    return (0);
}