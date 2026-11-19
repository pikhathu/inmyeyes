/*
    Array _find helper functions.
*/
#ifndef ARRAY_FIND_H
#define ARRAY_FIND_H

#include "../types.h"

const void *_array_find_double(const Array **arr, const double value);
const void *_array_find_float(const Array **arr, const float value);
const void *_array_find_int(const Array **arr, const int value);
const void *_array_find_size_t(const Array **arr, const size_t value);
const void *_array_find_string(const Array **arr, const char *value);

#endif