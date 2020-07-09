/*
** EPITECH PROJECT, 2019
** cpp_rush1_2019
** File description:
** new.c
*/

#include <stdio.h>
#include "vertex.h"
#include "new.h"

typedef struct
{
    Class   base;
    int     x, y, z;
}   VertexClass;

static void Vertex_ctor(VertexClass *this, va_list *args)
{
    if (!this || !args)
        raise("Invalid parameter!");
    this->x = va_arg(*args, int);
    this->y = va_arg(*args, int);
    this->z = va_arg(*args, int);
}

static void Vertex_dtor(VertexClass *this)
{
    (void)this;
}

static char *vertex_str(VertexClass *this)
{
    char arr[50] = {'\0'};
    snprintf(arr, 50, "<%s (%d, %d, %d)>", this->base.__name__, this->x, this->y, this->z);
    return (strdup(arr));
}

static Object *vertex_add(VertexClass *a, VertexClass *b)
{
    VertexClass *r = new(Vertex, a->x + b->x, a->y + b->y, a->z + b->z);

    return (r);
}

static Object *vertex_sub(VertexClass *a, VertexClass *b)
{
    VertexClass *r = new(Vertex, a->x - b->x, a->y - b->y, a->z - b->z);

    return (r);
}

static const VertexClass _description = {
    {   /* Class struct */
        .__size__ = sizeof(VertexClass),
        .__name__ = "Vertex",
        .__ctor__ = (ctor_t)&Vertex_ctor,
        .__dtor__ = (dtor_t)&Vertex_dtor,
        .__str__ = (to_string_t)&vertex_str,
        .__add__ = (binary_operator_t)&vertex_add,
        .__sub__ = (binary_operator_t)&vertex_sub,
        .__mul__ = NULL,
        .__div__ = NULL,
        .__eq__ = NULL,
        .__gt__ = NULL,
        .__lt__ = NULL
    },
    .x = 0,
    .y = 0
};

const Class   *Vertex = (const Class *)&_description;