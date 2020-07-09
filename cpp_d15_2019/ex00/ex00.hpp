/*
** EPITECH PROJECT, 2020
** CPP Pool D15
** File description:
** ex00
*/

#ifndef EX00_HPP_
#define EX00_HPP_

template<typename T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}

template<typename T>
const T &min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template<typename T>
const T &max(const T &a, const T &b)
{
    if (a > b)
        return (a);
    return (b);
}

template<typename T>
T add(const T &a, const T &b)
{
    return (a + b);
}

#endif /* !EX00_HPP_ */