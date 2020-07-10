/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** task07
*/

int my_put_nbr(int nb)
{
    if (nb == -2147483648){
        my_putstr("-2147483648");
    }
    if (nb<0){
        nb = -nb;
        my_putchar('-');
    }
    if (nb >= 10){
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
}
