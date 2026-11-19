/*
    Array _destroy helper functions.
*/
#ifndef ARRAY_DESTROY_H
#define ARRAY_DESTROY_H

#include "../types.h"

void _array_destroy_double(Array **arr);
void _array_destroy_float(Array **arr);
void _array_destroy_int(Array **arr);
void _array_destroy_size_t(Array **arr);
void _array_destroy_string(Array **arr);

#endif