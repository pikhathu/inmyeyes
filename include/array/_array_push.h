/*
    Array _push helper functions.
*/
#ifndef ARRAY_PUSH_H
#define ARRAY_PUSH_H

#include "../types.h"

int _array_push_double(Array **arr, const double value);
int _array_push_float(Array **arr, const float value);
int _array_push_int(Array **arr, const int value);
int _array_push_size_t(Array **arr, const size_t value);
int _array_push_string(Array **arr, const char *value);

#endif