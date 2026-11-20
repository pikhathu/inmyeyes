#include <stdlib.h>
#include <stdio.h>
#include "types.h"
#include "array/_array_print.h"

void _array_print_double(const Array **arr) {
    if (arr == NULL || *arr == NULL) {
        printf("NULL");
        return;
    }

    printf("[");

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (i >= 1)
            printf(", ");

        printf("%lf", *(double *)(*arr)->elements[i]);
    }

    printf("]\n");
}

void _array_print_float(const Array **arr) {
    if (arr == NULL || *arr == NULL) {
        printf("NULL");
        return;
    }

    printf("[");

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (i >= 1)
            printf(", ");

        printf("%f", *(float *)(*arr)->elements[i]);
    }

    printf("]\n");
}

void _array_print_int(const Array **arr) {
    if (arr == NULL || *arr == NULL) {
        printf("NULL");
        return;
    }

    printf("[");

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (i >= 1)
            printf(", ");

        printf("%d", *(int *)(*arr)->elements[i]);
    }

    printf("]\n");
}

void _array_print_size_t(const Array **arr) {
    if (arr == NULL || *arr == NULL) {
        printf("NULL");
        return;
    }

    printf("[");

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (i >= 1)
            printf(", ");

        printf("%lu", *(size_t *)(*arr)->elements[i]);
    }

    printf("]\n");
}

void _array_print_string(const Array **arr) {
    if (arr == NULL || *arr == NULL) {
        printf("NULL");
        return;
    }

    printf("[");

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (i >= 1)
            printf(", ");

        printf("%s", (char *)(*arr)->elements[i]);
    }

    printf("]\n");
}