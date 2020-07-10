/*
** EPITECH PROJECT, 2019
** my_str_islower
** File description:
** is it lower
*/
int check (char const *str)
{
    int i = 0;
    int res = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z'){
            res = res;
        } else {
            res = res + 1;
        }
        i++;
    }
    return (res);
}

int my_str_islower (char const *str)
{
    if (check(str) == 0){
        return (1);
    } else {
        return (0);
    }
}
