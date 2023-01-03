/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** task03
*/
char *my_revstr(char *str)
{
    int first;
    int lenght = my_strlen(str);
    int len = my_strlen(str);
    int j = 0;
    char *res = malloc(sizeof(char) * my_strlen(str));

    lenght--;
    while (j < len){
        first = str[j];
        res[j] = str[lenght];
        res[lenght] = first;
        j++;
        lenght--;
    }
    return (res);
}
