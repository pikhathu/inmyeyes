/*
    Custom string library.
*/
#ifndef STR_H
#define STR_H

#include <stdlib.h>

size_t str_len(const char *str);
char *str_new(const char *str);
int str_compare(const char *a, const char *b);
void str_destroy(char *str);

#endif