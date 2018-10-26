/*
** EPITECH PROJECT, 2018
** my_is_prime.c
** File description:
**  check if the input number is prime or not
*/

int my_is_prime(int nb)
{
    if ((nb % 2 == 0 && nb != 2) || nb <= 1)
        return (0);

    for (int i = 2; i <= nb; i++) {
        if ((nb % i == 0) && (nb != i)) {
            return (0);
        }
    }
    return (1);
}