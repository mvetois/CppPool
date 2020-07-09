/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 05
*/

#include <stdlib.h>
#include <stdarg.h>
#include "../raise.h"
#include "list.h"
#include "../new.h"
#include "../int.h"
#include "../char.h"
#include "../float.h"

typedef struct NodeClass_s
{
    Object      *_data;
    struct NodeClass_s *_next;
    struct NodeClass_s *_prev;
}   NodeClass;

typedef struct {
    Container   base;
    Class       *_type;
    NodeClass   *_begin;
    NodeClass   *_end;
}   ListClass;

typedef struct {
    Iterator    base;
    Class       *_type;
    NodeClass   *_current;
}   ListIteratorClass;

static void     ListIterator_ctor(ListIteratorClass *this, va_list *args)
{
    this->_current = va_arg(*args, NodeClass *);
    this->_type = va_arg(*args, Class *);
}

static bool     ListIterator_eq(ListIteratorClass *this, ListIteratorClass *other)
{
    return (this->_current == other->_current);
}

static void     ListIterator_incr(ListIteratorClass *this)
{
    if (!this->_current)
        raise("Out of list");
    this->_current = this->_current->_next;
}

static Object   *ListIterator_getval(ListIteratorClass *this)
{
    if (!this)
        raise("Bad argument");
    if (!this->_current)
        raise("Out of list");
    return (this->_current->_data);
}

static void     ListIterator_setval(ListIteratorClass *this, ...)
{
    va_list l;

    if (!this)
        raise("Bad argument given");
    if (!this->_current)
        raise("Out of list");
    va_start(l, this);
    delete(this->_current->_data);
    this->_current->_data = va_new(this->_type, &l);
    va_end(l);
}

static const ListIteratorClass   ListIteratorDescr = {
    {   /* Iterator struct */
        {   /* Class struct */
            .__size__ = sizeof(ListIteratorClass),
            .__name__ = "ListIterator",
            .__ctor__ = (ctor_t)&ListIterator_ctor,
            .__dtor__ = NULL,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = (binary_comparator_t)&ListIterator_eq,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__incr__ = (incr_t)&ListIterator_incr,
        .__getval__ = (getval_t)&ListIterator_getval,
        .__setval__ = (setval_t)&ListIterator_setval,
    },
    ._type = NULL,
    ._current = NULL,
};

static const Class    *ListIterator = (const Class *)&ListIteratorDescr;

static void     List_ctor(ListClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->_type = ((Class *)va_arg(*args, void*));
    this->_begin = NULL;
    this->_end = NULL;
}

static void     Node_free(NodeClass *this)
{
    if (!this)
        return;
    Node_free(this->_next);
    delete(this->_data);
    free(this);
}

static void     List_dtor(ListClass *this)
{
    if (!this)
        return;
    Node_free(this->_begin);
}

static size_t   List_len(ListClass *this)
{
    size_t len = 0;
    NodeClass *node = NULL;

    node = this->_begin;
    while (node) {
        node = node->_next;
        len++;
    }
    return len;
}

static Iterator *List_begin(ListClass *this)
{
    return (new(ListIterator, this->_begin, this->_type));
}

static Iterator *List_end(ListClass *this)
{
    return (new(ListIterator, NULL, this->_type));
}

static void     List_pushfront(ListClass *this, ...)
{
    va_list l;
    NodeClass *to_add = NULL;

    if (!this)
        raise("Bad argument given");
    to_add = calloc(1, sizeof(NodeClass));
    va_start(l, this);
    to_add->_data = va_new(this->_type, &l);
    to_add->_next = this->_begin;
    to_add->_prev = NULL;
    if (!this->_begin)
        this->_end = to_add;
    this->_begin = to_add;
    va_end(l);
}

static Object    *List_popfront(ListClass *this)
{
    NodeClass *to_move = NULL;
    Object *cache = NULL;

    if (!this->_begin)
        return NULL;
    cache = this->_begin->_data;
    to_move = this->_begin->_next;
    free(this->_begin);
    this->_begin = to_move;
    if (!to_move)
        this->_end = NULL;
    else
        to_move->_prev = NULL;
    return cache;
}

static Object    *List_front(ListClass *this)
{
    if (this->_begin)
        return this->_begin->_data;
    return NULL;
}

static void     List_pushback(ListClass *this, ...)
{
    va_list l;
    NodeClass *to_add = NULL;

    if (!this)
        raise("Bad argument given");
    to_add = calloc(1, sizeof(NodeClass));
    va_start(l, this);
    to_add->_data = va_new(this->_type, &l);
    to_add->_next = NULL;
    to_add->_prev = this->_end;
    if (!this->_end) {
        this->_begin = to_add;
    } else {
        this->_end->_next = to_add;
    }
    this->_end = to_add;
    va_end(l);
}

static Object    *List_popback(ListClass *this)
{
    NodeClass *to_move = NULL;
    Object *cache = NULL;

    if (!this->_end)
        return NULL;
    cache = this->_end->_data;
    to_move = this->_end->_prev;
    free(this->_end);
    this->_end = to_move;
    if (this->_end)
        this->_end->_next = NULL;
    return cache;
}

static Object    *List_back(ListClass *this)
{
    if (this->_end)
        return this->_end->_data;
    return NULL;
}

static const ListClass   _descr = {
    {   /* Container struct */
        {   /* Class struct */
            .__size__ = sizeof(ListClass),
            .__name__ = "List",
            .__ctor__ = (ctor_t)&List_ctor,
            .__dtor__ = (dtor_t)&List_dtor,
            .__str__ = NULL,
            .__add__ = NULL,
            .__sub__ = NULL,
            .__mul__ = NULL,
            .__div__ = NULL,
            .__eq__ = NULL,
            .__gt__ = NULL,
            .__lt__ = NULL,
        },
        .__len__ = (len_t)&List_len,
        .__begin__ = (iter_t)&List_begin,
        .__end__ = (iter_t)&List_end,
        .__getitem__ = NULL,
        .__setitem__ = NULL,
        .__pushfront__ = (setitem_t)&List_pushfront,
        .__popfront__ = (getcurrent_t)&List_popfront,
        .__front__ = (getcurrent_t)&List_front,
        .__pushback__ = (setitem_t)&List_pushback,
        .__popback__ = (getcurrent_t)&List_popback,
        .__back__ = (getcurrent_t)&List_back,
    },
    ._type = NULL,
    ._begin = NULL,
    ._end = NULL
};

const Class   *List = (const Class *)&_descr;
