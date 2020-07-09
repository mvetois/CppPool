/*
** EPITECH PROJECT, 2019
** cpp_rush1_2019
** File description:
** float.c
*/

#include "float.h"
#include "new.h"

typedef struct
{
    Class   base;
    float    x;
}   FloatClass;

static void Float_ctor(FloatClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->x = va_arg(*args, double);
}

static void Float_dtor(FloatClass *this)
{
    (void)this;
}

static char *Float_str(FloatClass *this)
{
    char arr[50] = {'\0'};
    snprintf(arr, 50, "<%s (%f)>", this->base.__name__, this->x);
    return (strdup(arr));
}

static Object *Float_add(const FloatClass *a,const FloatClass *b)
{
    FloatClass *r = new(Float, a->x + b->x);

    return (r);
}

static Object *Float_sub(const FloatClass *a,const FloatClass *b)
{
    FloatClass *r = new(Float, a->x - b->x);

    return (r);
}

static Object *Float_mul(const FloatClass *a,const FloatClass *b)
{
    FloatClass *r = new(Float, a->x * b->x);

    return (r);
}

static Object *Float_div(const FloatClass *a,const FloatClass *b)
{
    FloatClass *r = new(Float, a->x / b->x);

    return (r);
}

static bool Float_eq(const FloatClass *a,const FloatClass *b)
{
    return a->x == b->x;
}

static bool Float_gt(const FloatClass *a,const FloatClass *b)
{
    return a->x > b->x;
}

static bool Float_lt(const FloatClass *a,const FloatClass *b)
{
    return a->x < b->x;
}

static const FloatClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(FloatClass),
        .__name__ = "Float",
        .__ctor__ = (ctor_t)&Float_ctor,
        .__dtor__ = (dtor_t)&Float_dtor,
        .__str__ = (to_string_t)&Float_str,
        .__add__ = (binary_operator_t)&Float_add,
        .__sub__ = (binary_operator_t)&Float_sub,
        .__mul__ = (binary_operator_t)&Float_mul,
        .__div__ = (binary_operator_t)&Float_div,
        .__eq__ = (binary_comparator_t)&Float_eq,
        .__gt__ = (binary_comparator_t)&Float_gt,
        .__lt__ = (binary_comparator_t)&Float_lt
    },
    .x = 0
};

const Class   *Float = (const Class *)&_description;
