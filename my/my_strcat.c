/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** task02
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int lenght = 0;
    while (dest[lenght] != '\0'){
        lenght++;
    }
    while (src[i] != '\0'){
        dest[lenght+i] = src[i];
        i++;
    }
    return (dest);
}
