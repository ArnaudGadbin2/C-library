/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** task02
*/
char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++){
        dest[i] = src[i];
    }
}
