/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** task06
*/

int my_strcmp(char const *s, char const *s2)
{
    int i = 0;

    while (s[i] == s2[i] && s[i] != '\0' && s2[i] != '\0')
        i++;
    return (s[i] - s2[i]);
}
