#include <stdlib.h>
#include "types.h"
#include "array/_array_shift.h"
#include "str/str.h"

int _array_shift_left_primitives(Array **arr, const size_t start) {
    if (arr == NULL || *arr == NULL)
        return 0;

    size_t count = (*arr)->count;

    if (start >= (count - 1))
        return 0;

    for (size_t i = start; i < (count - 1); i++) {
        if (i == start && (*arr)->elements[i] != NULL)
            free((*arr)->elements[i]);

        (*arr)->elements[i] = (*arr)->elements[i + 1];
    }

    if ((*arr)->elements[count] != NULL)
        free((*arr)->elements[count]);

    (*arr)->elements[count] = NULL;

    return 1;
}

int _array_shift_left_string(Array **arr, const size_t start) {
    if (arr == NULL || *arr == NULL)
        return 0;

    size_t count = (*arr)->count;

    if (start >= (count - 1))
        return 0;

    for(size_t i = start; start < (count - 1); i++) {
        if (i == start && (*arr)->elements[start] != NULL)
            str_destroy((*arr)->elements[start]);

        (*arr)->elements[i] = (*arr)->elements[i + 1];
    }

    if ((*arr)->elements[count] != NULL)
        str_destroy((*arr)->elements[count]);
    
    (*arr)->elements[count] = NULL;

    return 1;
}