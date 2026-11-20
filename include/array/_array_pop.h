/*
    Array _pop helper functions.
*/
#ifndef ARRAY_POP_H
#define ARRAY_POP_H

#include "../types.h"

void *_array_pop_double(Array **arr);
void *_array_pop_float(Array **arr);
void *_array_pop_int(Array **arr);
void *_array_pop_size_t(Array **arr);
void *_array_pop_string(Array **arr);

#endif