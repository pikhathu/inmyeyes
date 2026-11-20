/*
    Array _delete helper functions.
*/
#ifndef ARRAY_DELETE_H
#define ARRAY_DELETE_H

#include "../types.h"

int _array_delete_double(Array **arr, const double value);
int _array_delete_float(Array **arr, const float value);
int _array_delete_int(Array **arr, const int value);
int _array_delete_size_t(Array **arr, const size_t value);
int _array_delete_string(Array **arr, const char *value);

#endif