/*
** EPITECH PROJECT, 2019
** cpp_rush1
** File description:
** Exercice 03
*/

#include <stdio.h>
#include "new.h"
#include "point.h"
#include "vertex.h"
#include "int.h"

int         main(void)
{
    Object  *p1 = new(Int, 12);
    Object  *p2 = new(Int, 5);

    printf("%s + %s = %s\n", str(p1), str(p2), str(addition(p1, p2)));
    printf("%s - %s = %s\n", str(p1), str(p2), str(subtraction(p1, p2)));

    return (0);
}
