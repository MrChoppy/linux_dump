/*
** EPITECH PROJECT, 2018
** my_compute_square_root.c
** File description:
** find the square root of a number using iteration
*/

int my_compute_square_root(int nb)
{
    int a = 1;
    while (a * a  <= nb) {
        if (a * a == nb)
            return (a);
        a++;
    }
    if (nb < 0)
        return (0);
    return (0);
}