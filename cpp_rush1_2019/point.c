/*
** EPITECH PROJECT, 2018
** cpp_rush1
** File description:
** Exercice 02
*/

#include <stdio.h>
#include "point.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y;
}   PointClass;

static void Point_ctor(PointClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
}

static void Point_dtor(PointClass *this)
{
    (void)this;
}

static char *point_str(PointClass *this)
{
    char arr[50] = {'\0'};
    snprintf(arr, 50, "<%s (%d, %d)>", this->base.__name__, this->x, this->y);
    return (strdup(arr));
}

static Object *point_add(const PointClass *a,const PointClass *b)
{
    PointClass *r = new(Point, a->x + b->x, a->y + b->y);

    return (r);
}

static Object *point_sub(const PointClass *a,const PointClass *b)
{
    PointClass *r = new(Point, a->x - b->x, a->y - b->y);

    return (r);
}

static const PointClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(PointClass),
        .__name__ = "Point",
        .__ctor__ = (ctor_t)&Point_ctor,
        .__dtor__ = (dtor_t)&Point_dtor,
        .__str__ = (to_string_t)&point_str,
        .__add__ = (binary_operator_t)&point_add,
        .__sub__ = (binary_operator_t)&point_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Point = (const Class *)&_description;
