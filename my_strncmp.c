/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** task07
*/

int my_strncmp (char const *s, char const *s2, int n)
{
    int i = 0;

    while (i < n - 1 && s[i] == s2[i] && s[i] != '\0' && s2[i] != '\0'){
        i = i + 1;
    }
    return (s[i] - s2[i]);
}
