/*
** EPITECH PROJECT, 2019
** memset
** File description:
** fill memory
*/

#include "my.h"

void *my_memset (void *s, int c, size_t n) {
    char *s2 = s;
    unsigned char c2 = c;
 
    while (n--)
        *s2++ = c2;
    return s;
}