/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** func
*/

#include "string.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int my_strlen(char const *str)
{
    int a = 0;

    if (str == NULL)
        return (0);
    while (str[a] != '\0') {
        a++;
    } return (a);
}

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
    return (dest);
}