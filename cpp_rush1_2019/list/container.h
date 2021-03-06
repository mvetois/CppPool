/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 05
*/

#ifndef CONTAINER_H
# define CONTAINER_H

# include "../object.h"
# include "../iterator.h"
# include "../raise.h"

typedef struct Container_s Container;

typedef Iterator *(*iter_t)(Container *this);
typedef size_t (*len_t)(Container *this);
typedef Object *(*getitem_t)(Container *this, ...);
typedef void (*setitem_t)(Container *this, ...);
typedef Object *(*getcurrent_t)(Container *this);

struct Container_s {
    Class       base;
    len_t       __len__;
    iter_t      __begin__;
    iter_t      __end__;
    getitem_t   __getitem__;
    setitem_t   __setitem__;
    setitem_t   __pushfront__;
    getcurrent_t   __popfront__;
    getcurrent_t   __front__;
    setitem_t   __pushback__;
    getcurrent_t   __popback__;
    getcurrent_t   __back__;
};

# define len(c)             ((Container *)c)->__len__(c)
# define begin(c)           ((Container *)c)->__begin__(c)
# define end(c)             ((Container *)c)->__end__(c)
# define getitem(c, ...)    ((Container *)c)->__getitem__(c, __VA_ARGS__)
# define setitem(c, ...)    ((Container *)c)->__setitem__(c, __VA_ARGS__)
# define pushfront(c, ...)  ((Container *)c)->__pushfront__(c, __VA_ARGS__)
# define popfront(c)        ((Container *)c)->__popfront__(c)
# define front(c)           ((Container *)c)->__front__(c)
# define pushback(c, ...)  ((Container *)c)->__pushback__(c, __VA_ARGS__)
# define popback(c)        ((Container *)c)->__popback__(c)
# define back(c)           ((Container *)c)->__back__(c)

#endif
