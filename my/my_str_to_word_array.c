/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** put str into array of words
*/

#include "./include/function.h"

int check_spaces(char c)
{
    if (c == ':' || c == '\n')
        return (1);
    else
        return (0);
}

int nb_words(char *str)
{
    int i = 0;
    int count = 0;

    while (str[i] != '\0'){
        if (str[i] == ':' || str[i] == '\n')
            count++;
        i++;
    }
    return (count+1);
}

int nb_letters(char *str , int i)
{
    int count = 0;

    while (check_spaces(str[i]) != 1){
        i++;
        count++;
    }
    return (count);
}

char **put_str_into_words(char **arr , char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (j < nb_words(str)){
        k = 0;
        while (check_spaces(str[i]) != 0)
            i++;
        arr[j] = (char*)malloc(sizeof(char) * 2000);
        while (str[i] != ':' && str[i] != '\0'
        && str[i] != 10){
            arr[j][k] = str[i];
            i++;
            k++;
        }
        arr[j][k] = '\0';
        j++;
    }
    arr[j] = NULL;
    return (arr);
}

char **str_to_word_array(char *str)
{
    char **arr = (char**)malloc(sizeof(char *) * 10000);
    arr = put_str_into_words(arr , str);

    return (arr);
}