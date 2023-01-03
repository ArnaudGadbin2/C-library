/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf for mouli
*/

#include <stdarg.h>
#include <stdio.h>

typedef struct array_s
{
    char c;
    void (*ptr)(va_list ap);
}array_t;

void prt_str(va_list ap)
{
    my_putstr(va_arg(ap, char));
}

void prt_char(va_list ap)
{
    my_putchar(va_arg(ap, char));
}

void prt_int(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void prt_bin(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void prt_div(va_list ap)
{
    my_putchar('%');
}

void prt_m(va_list ap)
{
    my_putstr("SUCESS");
}

static array_t tab[] =
{
    {'s' , &prt_str},
    {'c' , &prt_char},
    {'i' , &prt_int},
    {'b' , &prt_bin},
    {'%' , &prt_div},
    {'m' , &prt_m},
    {NULL, 0}
};

void chars(char c, char *s , va_list ap)
{
    int i = 0;

    while (tab[i].c != 0){
        if (tab[i].c == c)
            tab[i].ptr(ap);
        i++;
    }
}

int my_printf(char *s, ...)
{
    int i = 0;

    va_list ap;
    va_start(ap, s);

    while (s[i] != '\0'){
        if (s[i] == '%'){
            chars(s[i+1], s, ap);
            i++;
        }
        else if (s[i] != '%'){
            my_putchar(s[i]);
        }
        i++;
    }
    va_end(ap);
    return (0);
}
