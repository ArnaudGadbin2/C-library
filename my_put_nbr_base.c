/*
** EPITECH PROJECT, 2019
** my_put_nbr_base
** File description:
** put_nbr in every base
*/

int my_put_nbr_base(int nb, char *str)
{
    int res;
    int nbr;
    int base = my_strlen(str);

    if (nb < 0){
        nb = -nb;
        my_putchar('-');
    }
    res = nb / base;
    nbr = nb % base;
    if (res > 0){
        my_put_nbr_base(res,str);
    }
    my_putchar(str[nbr]);
    return (0);
}
