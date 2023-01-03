/*
** EPITECH PROJECT, 2019
** my_str_isprintable
** File description:
** print
*/

int my_str_isprintable (char const *str)
{
    int i = 0;
    int res = 0;

    while (str[i] != '\0'){
        if ( str[i] >= 0 && str[i] <= 32){
            res = res;
        } else {
            res = res + 1;
        }
        i++;
    }
    if (res != 0){
        return (0);
    } else {
        return (1);
    }
}
