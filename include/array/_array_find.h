/*
    Array _find helper functions.
*/
#ifndef ARRAY_FIND_H
#define ARRAY_FIND_H

#include "../types.h"

void *_array_find_double(Array **arr, const double value);
void *_array_find_float(Array **arr, const float value);
void *_array_find_int(Array **arr, const int value);
void *_array_find_size_t(Array **arr, const size_t value);
void *_array_find_string(Array **arr, const char *value);

#endif