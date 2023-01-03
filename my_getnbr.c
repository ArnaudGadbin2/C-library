/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int number;
    int minus = 0;
    int i = 0;

    if (str[i] == '-'){
        while (str[i] == '-'){
            minus = minus + 1;
            i++;
        }
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        number = number + str[i] - '0';
        number = number * 10;
        i++;
    }
    if (minus % 2 != 0){
        number = -number;
    }
    return (number/10);
}
