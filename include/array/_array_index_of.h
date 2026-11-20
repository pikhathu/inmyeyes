/*
    Array _index_of helper functions.
*/
#ifndef ARRAY_INDEX_H
#define ARRAY_INDEX_H

#include "../types.h"

int _array_index_of_double(Array **arr, const double value);
int _array_index_of_float(Array **arr, const float value);
int _array_index_of_int(Array **arr, const int value);
int _array_index_of_size_t(Array **arr, const size_t value);
int _array_index_of_string(Array **arr, const char *value);

#endif