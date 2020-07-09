/*
** EPITECH PROJECT, 2020
** CPP Pool D03
** File description:
** string
*/

#ifndef STRING_H_
#define STRING_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_MIN ((size_t) 10)

typedef struct string_s string_t;
struct string_s {
    void (*assign_c)(string_t *this, char const *s);
    void (*assign_s)(string_t *this, string_t const *str);
    void (*append_c)(string_t *this, char const *ap);
    void (*append_s)(string_t *this, string_t const *ap);
    char (*at)(const string_t *this, size_t pos);
    void (*clear)(string_t *this);
    int (*size)(const string_t *this);
    int (*compare_c)(const string_t *this, const char *str);
    int (*compare_s)(const string_t *this, const string_t *str);
    size_t (*copy)(const string_t *this, char *s, size_t n, size_t pos);
    char const* (*c_str)(const string_t *this);
    int (*empty)(const string_t *this);
    int (*find_s)(const string_t *this, const string_t *str, size_t pos);
    int (*find_c)(const string_t *this, const char *str, size_t pos);
    void (*insert_c)(string_t *this, size_t pos, const char *str);
    void (*insert_s)(string_t *this, size_t pos, const string_t *str);
    char (***split_c)(string_t *this, char separator);
    string_t (***split_s)(string_t *this, char separator);
    int (*to_int)(string_t *this);

    char *str;
};

//func.c
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);

//my_string.c
void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);

//assign.c
void assign_s(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);

//append.c
void append_s(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);

//at.c
char at(const string_t *this, size_t pos);

//clear.c
void clear(string_t *this);

//size.c
int size(const string_t *this);

//compare.c
int compare_s(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);

//copy.c
size_t copy(const string_t *this, char *s, size_t n, size_t pos);

//c_str.c
const char *c_str(const string_t *this);

//empty.c
int empty(const string_t *this);

//find.c
int find_s(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, const char *str, size_t pos);

//insert.c
void insert_c(string_t *this, size_t pos, const char *str);
void insert_s(string_t *this, size_t pos, const string_t *str);

//to_int.c
int to_int(string_t *this);

//split.c
char **split_c(string_t *this, char separator);
string_t **split_s(string_t *this, char separator);

#endif /* !STRING_H_ */
