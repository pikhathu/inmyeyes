#include <stdlib.h>
#include "array/_array_delete_at.h"
#include "array/_array_delete.h"
#include "array/_array_index_of.h"
#include "types.h"

int _array_delete_double(Array **arr, const double value) {
    if (arr == NULL || *arr == NULL)
        return 0;

    int index = _array_index_of_double(arr, value);

    if (index < 0)
        return 0;

    return _array_delete_at_primitives(arr, index);
}

int _array_delete_float(Array **arr, const float value) {
    if (arr == NULL || *arr == NULL)
        return 0;

    int index = _array_index_of_float(arr, value);

    if (index < 0)
        return 0;

    return _array_delete_at_primitives(arr, index);
}

int _array_delete_int(Array **arr, const int value) {
    if (arr == NULL || *arr == NULL)
        return 0;

    int index = _array_index_of_int(arr, value);

    if (index < 0)
        return 0;

    return _array_delete_at_primitives(arr, index);
}

int _array_delete_size_t(Array **arr, const size_t value) {
    if (arr == NULL || *arr == NULL)
        return 0;

    int index = _array_index_of_size_t(arr, value);

    if (index < 0)
        return 0;

    return _array_delete_at_primitives(arr, index);
}

int _array_delete_string(Array **arr, const char *value) {
    if (arr == NULL || *arr == NULL)
        return 0;

    int index = _array_index_of_string(arr, value);

    if (index < 0)
        return 0;

    return _array_delete_at_string(arr, index);
}