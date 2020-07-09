/*
** EPITECH PROJECT, 2020
** CPP Pool D17
** File description:
** find
*/

#ifndef FIND_HPP_
#define FIND_HPP_
#include <algorithm>

template<typename T>
typename T::iterator do_find(T &src, int f)
{
    return (std::find(src.begin(), src.end(), f));
}

#endif /* !FIND_HPP_ */
