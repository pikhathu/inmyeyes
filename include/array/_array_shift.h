/*
    Array _shift helper functions to be used by _delete_*.
*/
#ifndef ARRAY_SHIFT_H
#define ARRAY_SHIFT_H

#include <stdlib.h>
#include "../types.h"

int _array_shift_left_primitives(Array **arr, const size_t start);
int _array_shift_left_string(Array **arr, const size_t start);

#endif