/*
    Array _index_of helper functions.
*/
#ifndef ARRAY_INDEX_H
#define ARRAY_INDEX_H

#include "../types.h"

int _array_index_of_double(const Array **arr, const double value);
int _array_index_of_float(const Array **arr, const float value);
int _array_index_of_int(const Array **arr, const int value);
int _array_index_of_size_t(const Array **arr, const size_t value);
int _array_index_of_string(const Array **arr, const char *value);

#endif