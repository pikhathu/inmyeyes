/*
    Array _contains helper functions.
*/
#ifndef ARRAY_CONTAINS_H
#define ARRAY_CONTAINS_H

#include "../types.h"

int _array_contains_double(Array **arr, const double value);
int _array_contains_float(Array **arr, const float value);
int _array_contains_int(Array **arr, const int value);
int _array_contains_size_t(Array **arr, const size_t value);
int _array_contains_string(Array **arr, const char *value);

#endif