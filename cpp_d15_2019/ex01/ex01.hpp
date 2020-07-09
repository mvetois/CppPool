/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex01
*/

#ifndef EX01_HPP_
#define EX01_HPP_
#include <string.h>

template<typename T>
int compare(const T &a, const T &b)
{
    if (a < b)
        return (-1);
    if (a > b)
        return (1);
    return (0);
}

template<>
int compare<const char *>(const char *const &a, const char *const &b)
{
    int res = strcmp(a, b);

    if (res < 0)
        return (-1);
    if (res > 0)
        return (1);
    return (0);
}


#endif /* !EX01_HPP_ */