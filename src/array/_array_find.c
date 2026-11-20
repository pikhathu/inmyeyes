#include <stddef.h>
#include <stdlib.h>
#include "types.h"
#include "array/_array_index_of.h"
#include "array/_array_find.h"

void *_array_find_double(Array **arr, const double value) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    const int index = _array_index_of_double(arr, value);

    if (index < 0)
        return NULL;

    return (*arr)->elements[index];
}

void *_array_find_float(Array **arr, const float value) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    const int index = _array_index_of_float(arr, value);

    if (index < 0)
        return NULL;

    return (*arr)->elements[index];
}

void *_array_find_int(Array **arr, const int value) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    const int index = _array_index_of_int(arr, value);

    if (index < 0)
        return NULL;

    return (*arr)->elements[index];
}

void *_array_find_size_t(Array **arr, const size_t value) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    const int index = _array_index_of_size_t(arr, value);

    if (index < 0)
        return NULL;

    return (*arr)->elements[index];
}

void *_array_find_string(Array **arr, const char *value) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    const int index = _array_index_of_string(arr, value);

    if (index < 0)
        return NULL;

    return (*arr)->elements[index];
}