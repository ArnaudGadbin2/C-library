/*
** EPITECH PROJECT, 2019
** ok
** File description:
** ok
*/
int check (char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            res = res;
        } else {
            res = res + 1;
        }
        i++;
    }
    return (res);
}

int my_str_isalpha(char *str)
{
    if (check(str) == 0){
        return (1);
    } else {
        return (0);
    }
}
