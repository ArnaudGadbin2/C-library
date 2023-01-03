/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** task03
*/
char *my_strncat( char *dest, char const *src, int nb)
{
    int lenght = 0;
    while (dest[lenght] != '\0'){
        lenght++;
    }
    for (int i = 0; i < nb && src[i] != '\0'; i++){
        dest[lenght + i] = src[i];
    }
    return (dest);
}
