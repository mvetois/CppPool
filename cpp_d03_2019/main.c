#include "string.h"

int main()
{
    string_t s;
    string_t s2;
    char *a = NULL;

    string_init (&s, "Hello World");
    string_init (&s2, "Hello ");
    //assign_c(&s, "Test");
    //printf("%s\n", s.str);
    /*printf("%d\n", compare_s(&s, &s2));
    printf("%d\n", compare_c(&s, "Hello "));
    printf("%ld\n", copy(&s, a, 3, 2));
    printf("%s\n", c_str(&s));
*/
    char *str = strdup("aaaaaa !");
    printf("%d\n", (int)copy(&s, str, 12, 0));
    //split_s(&s, ' ');
    //char **tab =  split_c(&s, ' ');
    //for (int i = 0; tab[i] != NULL; i++)
    //    printf("%s\n", tab[i]);
    //insert_c(&s, 2, "FAA-EASA");
    //printf("%s\n", s.str);
    string_destroy(&s);
    string_destroy(&s2);
}