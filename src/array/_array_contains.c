#include "types.h"
#include "array/_array_index_of.h"
#include "array/_array_contains.h"

int _array_contains_double(Array **arr, const double value) {
    int index = _array_index_of_double(arr, value);

    return (index >= 0) ? 1 : 0;
}

int _array_contains_float(Array **arr, const float value) {
    int index = _array_index_of_float(arr, value);

    return (index >= 0) ? 1 : 0;
}

int _array_contains_int(Array **arr, const int value) {
    int index = _array_index_of_int(arr, value);

    return (index >= 0) ? 1 : 0;
}

int _array_contains_size_t(Array **arr, const size_t value) {
    int index = _array_index_of_size_t(arr, value);

    return (index >= 0) ? 1 : 0;
}

int _array_contains_string(Array **arr, const char *value) {
    int index = _array_index_of_string(arr, value);

    return (index >= 0) ? 1 : 0;
}