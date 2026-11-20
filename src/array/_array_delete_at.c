#include <stdlib.h>
#include "str/str.h"
#include "types.h"
#include "array/_array_delete_at.h"
#include "array/_array_shift.h"

int _array_delete_at_primitives(Array **arr, const size_t index) {
    if (arr == NULL || *arr == NULL)
        return 0;

    if (index >= (*arr)->count)
        return 0;

    free((*arr)->elements[index]);
    (*arr)->elements[index] = NULL;

    int shifted = _array_shift_left_primitives(arr, index);

    if (shifted != 1)
        return 0;

    (*arr)->count--;
    
    return 1;
}

int _array_delete_at_string(Array **arr, const size_t index) {
    if (arr == NULL || *arr == NULL)
        return 0;

    if (index >= (*arr)->count)
        return 0;

    str_destroy((*arr)->elements[index]);
    (*arr)->elements[index] = NULL;

    int shifted = _array_shift_left_string(arr, index);

    if (shifted != 1)
        return 0;

    (*arr)->count--;

    return 1;
}