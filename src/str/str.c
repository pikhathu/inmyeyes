#include <stdint.h>
#include <stdlib.h>
#include "str/str.h"

size_t str_len(const char *str) {
    if (str == NULL)
        return 0;

    size_t len = 0;

    int i = 0;

    while (str[i] != '\0') {
        len++;
        i++;
    }

    return len;
}

char *str_new(const char *str) {
    if (str == NULL)
        return NULL;

    size_t len = str_len(str);

    if (len >= SIZE_MAX)
        return NULL;

    char *new_str = malloc(sizeof(char) * (len + 1));

    if (new_str == NULL)
        return NULL;

    for (size_t i = 0; i < len; i++)
        new_str[i] = str[i];

    new_str[len] = '\0';

    return new_str;
}

int str_compare(const char *a, const char *b) {
    if (a == NULL && b == NULL) {
        return 0;
    } else if (a == NULL && b != NULL) {
        return -1;
    } else if (a != NULL && b == NULL) {
        return 1;
    }

    size_t len_a = str_len(a);
    size_t len_b = str_len(b);
    size_t shortest = (len_a <= len_b) ? len_a : len_b;

    for (size_t i = 0; i < shortest; i++) {
        unsigned char ca = (unsigned char)a[i];
        unsigned char cb = (unsigned char)b[i];

        if (ca < cb) {
            return -1;
        } else if (ca > cb) {
            return 1;
        }
    }

    if (len_a < len_b) {
        return -1;
    } else if (len_a > len_b) {
        return 1;
    }

    return 0;
}

void str_destroy(char *str) {
    if (str == NULL)
        return;

    free(str);
}