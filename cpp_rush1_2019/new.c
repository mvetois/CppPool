/*
** EPITECH PROJECT, 2019
** cpp_rush1_2019
** File description:
** new.c
*/

#include "object.h"
#include "new.h"

Object  *new(const Class *class, ...)
{
    va_list arg;
    Object *result = NULL;

    if (!class)
        return NULL;
    va_start(arg, class);
    result = va_new(class, &arg);
    va_end(arg);
    return result;
}

Object  *va_new(const Class *class, va_list* ap)
{
    Object *result = calloc(1, class->__size__);

    if (!result)
        raise("Fail calloc");
    memcpy(result, class, class->__size__);
    if (class->__ctor__)
        class->__ctor__(result, ap);
    return result;
}

void    delete(Object *ptr)
{
    if (!ptr)
        return;
    if ((((Class *)ptr)->__dtor__))
        ((Class *)ptr)->__dtor__(ptr);
    free(ptr);
}
