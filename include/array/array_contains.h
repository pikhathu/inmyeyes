/*
    Array _contains helper functions.
*/
#ifndef ARRAY_CONTAINS_H
#define ARRAY_CONTAINS_H

#include "../types.h"

int _array_contains_double(const Array **arr, const double value);
int _array_contains_float(const Array **arr, const float value);
int _array_contains_int(const Array **arr, const int value);
int _array_contains_size_t(const Array **arr, const size_t value);
int _array_contains_string(const Array **arr, const char *value);

#endif