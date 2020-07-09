/*
** EPITECH PROJECT, 2020
** CPP Pool D09
** File description:
** ex00
*/

#include "ex00.h"

static void koala_initializer(koala_t* this, char* _name, char _is_A_Legend)
{
    printf("----\n");
    this->m_is_a_legend = _is_A_Legend;
    printf("Building Cthulhu\n");
    this->m_parent.m_name = strdup(_name);
    this->m_parent.m_power = _is_A_Legend == 1 ? 42 : 0;
    printf("Building %s\n", _name);
}

static void cthulhu_initializer(cthulhu_t* this)
{
    printf("----\n");
    this->m_power = 42;
    this->m_name = "Cthulhu";
    printf("Building Cthulhu\n");
}

cthulhu_t* new_cthulhu(void)
{
    cthulhu_t *n;

    n = malloc(sizeof(cthulhu_t));
    cthulhu_initializer(n);
    return (n);
}

void print_power(cthulhu_t *this)
{
    printf("Power => %d\n", this->m_power);
}

void attack(cthulhu_t *this)
{
    if (this->m_power >= 42) {
        this->m_power -= 42;
        printf("%s attacks and destroys the city\n", this->m_name);
    } else
        printf("%s can't attack, he doesn't have enough power\n", this->m_name);
}

void sleeping(cthulhu_t *this)
{
    this->m_power += 42000;
    printf ("%s sleeps\n", this->m_name);
}

koala_t *new_koala(char *name, char is_a_legend)
{
    koala_t *n;

    n = malloc(sizeof(koala_t));
    koala_initializer(n, name, is_a_legend);
    return (n);
}

void eat(koala_t *this)
{
    this->m_parent.m_power += 42;
    printf("%s eats\n", this->m_parent.m_name);
}