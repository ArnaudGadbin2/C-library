/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** finds sup prime
*/

int find_prime(int nb)
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
    return (count);
}

int my_find_prime_sup(int nb)
{
    int count = find_prime(nb);

    if (find_prime(nb) == 1){
        return (nb);
    } else {
        while (count != 1){
            nb = nb + 1;
            count = my_find_prime_sup(nb);
            if (find_prime(nb) == 1){
                return (count);
            }
        }
    }
}
