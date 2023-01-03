/*
** EPITECH PROJECT, 2019
** my_strcapitalize
** File description:
** task10
*/
char *my_strcapitalize(char *str)
{
    int i = 0;

    for (i ; str[i] != '\0' ; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            str[i] += 32;
        }
    }
    i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 'a' && str[i] <= 'z' && i == 0){
            str[i] -= 32;
        }
        else if (str[i] >= 32 && str[i] <= 47 || str[i] >= 59 && str[i] <= 64){
            if (str[i+1] >= 'a' && str[i] <= 'z'){
                str[i+1] -= 32;
            }
        }
        i++;
    }
    return (str);
}
