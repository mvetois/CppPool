/*
** EPITECH PROJECT, 2020
** CPP Rush 1
** File description:
** int
*/

#include <stdio.h>
#include "int.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     i;
}   IntClass;

static void Int_ctor(IntClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->i = va_arg(*args, int);
}

static void Int_dtor(IntClass *this)
{
    (void)this;
}

static char *Int_str(IntClass *this)
{
    char arr[50] = {'\0'};
    snprintf(arr, 50, "<%s (%d)>", this->base.__name__, this->i);
    return (strdup(arr));
}

static Object *Int_add(const IntClass *a,const IntClass *b)
{
    IntClass *r = new(Int, a->i + b->i);

    return (r);
}

static Object *Int_sub(const IntClass *a,const IntClass *b)
{
    IntClass *r = new(Int, a->i - b->i);

    return (r);
}

static Object *Int_mul(const IntClass *a,const IntClass *b)
{
    IntClass *r = new(Int, a->i * b->i);

    return (r);
}

static Object *Int_div(const IntClass *a,const IntClass *b)
{
    IntClass *r = new(Int, a->i / b->i);

    return (r);
}

static bool Int_eq(const IntClass *a,const IntClass *b)
{
    if (a->i == b->i)
        return (true);
    return (false);
}

static bool Int_gt(const IntClass *a,const IntClass *b)
{
    if (a->i > b->i)
        return (true);
    return (false);
}

static bool Int_lt(const IntClass *a,const IntClass *b)
{
    if (a->i < b->i)
        return (true);
    return (false);
}

static const IntClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(IntClass),
        .__name__ = "Int",
        .__ctor__ = (ctor_t)&Int_ctor,
        .__dtor__ = (dtor_t)&Int_dtor,
        .__str__ = (to_string_t)&Int_str,
        .__add__ = (binary_operator_t)&Int_add,
        .__sub__ = (binary_operator_t)&Int_sub,
        .__mul__ = (binary_operator_t)&Int_mul,
        .__div__ = (binary_operator_t)&Int_div,
        .__eq__ = (binary_comparator_t)&Int_eq,
        .__gt__ = (binary_comparator_t)&Int_gt,
        .__lt__ = (binary_comparator_t)&Int_lt
    },
    .i = 0,
};

const Class *Int = (const Class *)&_description;
