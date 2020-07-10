/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** is it prime
*/
int my_is_prime( int nb)
{
    int i = 1;
    int k = 1;
    int n;
    int count = 0;

    while (k <= nb){
        n = k * i;
        if ( n == nb){
            count = count + 1;
        }
        i = i + 1;
        if (i == nb){
            k = k + 1;
            i = 1;
        }
    }
    if (count == 1){
        return (1);
    }
    return (0);
}
