/*
** EPITECH PROJECT, 2018
** my_compute_power_rec.c
** File description:
** print the power of a int using recursivity
*/

int my_compute_power_rec(int nb, int p)
{
    long outpout = 0;

    if (p == 0) {
        outpout = 1;
        return (outpout);
    } else {
        outpout = p < 0 ? 0 : nb * my_compute_power_rec(nb, p - 1);
        return (outpout);
    }
}