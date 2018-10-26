/*
** EPITECH PROJECT, 2018
** my_put_float.c
** File description:
** put a float with 2 decimals
*/

void my_put_float(float x)
{
    int integer = (int)(x);
    int decimal;
    int tmp = x * 100;

    decimal = tmp % 100;
    my_put_nbr(integer);
    my_putchar('.');
    if( decimal == 0){
        my_putstr("00");
    } else {
        my_put_nbr(decimal);
    }
}