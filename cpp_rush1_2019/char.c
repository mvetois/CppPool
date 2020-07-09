/*
** EPITECH PROJECT, 2019
** cpp_rush1_2019
** File description:
** new.c
*/

#include <stdio.h>
#include "char.h"
#include "new.h"

typedef struct
{
    Class   base;
    char     c;
}   CharClass;

static void char_ctor(CharClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->c = va_arg(*args, int);
}

static void char_dtor(CharClass *this)
{
    (void)this;
}

static char *char_str(CharClass *this)
{
    char arr[50] = {'\0'};
    snprintf(arr, 50, "<%s (%c)>", this->base.__name__, this->c);
    return (strdup(arr));
}

static Object *char_add(CharClass *a, CharClass *b)
{
    CharClass *r = new(Char, a->c + b->c);

    return (r);
}

static Object *char_sub(CharClass *a, CharClass *b)
{
    CharClass *r = new(Char, a->c - b->c);

    return (r);
}

static Object *char_mul(CharClass *a, CharClass *b)
{
    CharClass *r = new(Char, a->c * b->c);

    return (r);
}

static Object *char_div(CharClass *a, CharClass *b)
{
    CharClass *r = new(Char, a->c / b->c);

    return (r);
}

static bool char_equal(CharClass *a, CharClass *b)
{
    if (a->c == b->c)
        return 1;
    return 0;
}

static bool char_greater(CharClass *a, CharClass *b)
{
    if (a->c > b->c)
        return 1;
    return 0;
}

static bool char_lower(CharClass *a, CharClass *b)
{
    if (a->c < b->c)
        return 1;
    return 0;
}

static const CharClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(CharClass),
        .__name__ = "Char",
        .__ctor__ = (ctor_t)&char_ctor,
        .__dtor__ = (dtor_t)&char_dtor,
        .__str__ = (to_string_t)&char_str,
        .__add__ = (binary_operator_t)&char_add,
        .__sub__ = (binary_operator_t)&char_sub,
        .__mul__ = (binary_operator_t)&char_mul,
        .__div__ = (binary_operator_t)&char_div,
        .__eq__ = (binary_comparator_t)&char_equal,
        .__gt__ = (binary_comparator_t)&char_greater,
        .__lt__ = (binary_comparator_t)&char_lower
    },
    .c = 0
};

const Class   *Char = (const Class *)&_description;