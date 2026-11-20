#include <stdlib.h>
#include "str/str.h"
#include "types.h"
#include "array/_array_delete_at.h"
#include "array/_array_pop.h"

void *_array_pop_double(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    if ((*arr)->count < 1)
        return NULL;

    int index = (*arr)->count - 1;

    void *copy = malloc(sizeof(double));

    if (copy == NULL)
        return NULL;

    copy = (*arr)->elements[index];

    _array_delete_at_primitives(arr, index);

    return copy;
}

void *_array_pop_float(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    if ((*arr)->count < 1)
        return NULL;

    int index = (*arr)->count - 1;

    void *copy = malloc(sizeof(float));

    if (copy == NULL)
        return NULL;

    copy = (*arr)->elements[index];

    _array_delete_at_primitives(arr, index);

    return copy;
}

void *_array_pop_int(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    if ((*arr)->count < 1)
        return NULL;

    int index = (*arr)->count - 1;

    void *copy = malloc(sizeof(int));

    if (copy == NULL)
        return NULL;

    copy = (*arr)->elements[index];

    _array_delete_at_primitives(arr, index);

    return copy;
}

void *_array_pop_size_t(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    if ((*arr)->count < 1)
        return NULL;

    int index = (*arr)->count - 1;

    void *copy = malloc(sizeof(size_t));

    if (copy == NULL)
        return NULL;

    copy = (*arr)->elements[index];

    _array_delete_at_primitives(arr, index);

    return copy;
}

void *_array_pop_string(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    if ((*arr)->count < 1)
        return NULL;

    int index = (*arr)->count - 1;

    void *copy = str_new((*arr)->elements[index]);

    if (copy == NULL)
        return NULL;

    _array_delete_at_string(arr, index);

    return copy;
}