/*
** EPITECH PROJECT, 2019
** my_strupcase
** File description:
** task08
*/
char *my_strupcase(char *str)
{
    int c = 0;
    while (str[c] != '\0'){
        if (str[c] >= 'a' && str[c] <= 'z'){
            str[c] = str[c] - 32;
        }
        c++;
    }
    return (str);
}
