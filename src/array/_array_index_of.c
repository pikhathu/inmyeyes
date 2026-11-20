#include "types.h"
#include "str/str.h"

int _array_index_of_double(Array **arr, const double value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1)
        return -1;

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (*(double *)(*arr)->elements[i] == value)
            return i;
    }

    return -1;
}

int _array_index_of_float(Array **arr, const float value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1)
        return -1;

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (*(float *)(*arr)->elements[i] == value)
            return i;
    }

    return -1;
}

int _array_index_of_int(Array **arr, const int value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1)
        return -1;

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (*(int *)(*arr)->elements[i] == value)
            return i;
    }

    return -1;
}

int _array_index_of_size_t(Array **arr, const size_t value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1)
        return -1;

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (*(size_t *)(*arr)->elements[i] == value)
            return i;
    }

    return -1;
}

int _array_index_of_string(Array **arr, const char *value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1)
        return -1;

    for (size_t i = 0; i < (*arr)->count; i++) {
        if (str_compare((char *)(*arr)->elements[i], value) == 0)
            return i;
    }

    return -1;
}