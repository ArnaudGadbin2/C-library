/*
** EPITECH PROJECT, 2019
** ok
** File description:
** ok
*/
int check (char const *str)
{
    int i = 0;
    int res = 0;
    while (str[i] != '\0'){
        if (str[i] <= 47 || str[i] >= 58){
            res = res + 1;
        }
        i++;
    }
    return (res);
}
int my_str_isnum(char const *str)
{
    if (check(str) == 0){
        return (1);
    } else {
        return (0);
    }
}
