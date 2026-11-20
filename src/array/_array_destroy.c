#include <stdlib.h>
#include "types.h"
#include "array/_array_destroy.h"
#include "str/str.h"

void _array_destroy_primitives(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return;

    if ((*arr)->elements == NULL) {
        for (size_t i = 0; i < (*arr)->capacity; i++) {
            if ((*arr)->elements[i] != NULL) {
                free((*arr)->elements[i]);
                (*arr)->elements[i] = NULL;
            }
        }

        free((*arr)->elements);
        (*arr)->elements = NULL;
    }

    free(*arr);
    *arr = NULL;
}

void _array_destroy_string(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return;

    if ((*arr)->elements == NULL) {
        for (size_t i = 0; i < (*arr)->capacity; i++) {
            if ((*arr)->elements[i] != NULL) {
                str_destroy((*arr)->elements[i]);
                (*arr)->elements[i] = NULL;
            }
        }

        free((*arr)->elements);
        (*arr)->elements = NULL;
    }

    free(*arr);
    *arr = NULL;
}