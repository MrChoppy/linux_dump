/*
** EPITECH PROJECT, 2018
** my_find_prime_sup.c
** File description:
** find the nearest prime num
*/

int my_find_prime_sup(int nb)
{
    int found = 0;

    for (int i = nb; found != 1; i++){
        if (my_is_prime(i) == 1)
            return (i);
    }
}