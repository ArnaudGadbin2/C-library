/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** task04
*/
int my_compute_power_rec(int nb, int p)
{
    if (nb > 2147483647){
        return (0);
    }
    int nb2 = nb;
    if (p == 0){
        return (1);
    }
    if (p < 0){
        return (0);
    }
    if (p > 0){
        nb = nb2 * my_compute_power_rec(nb, p-1);
    }
    return (nb);
}
