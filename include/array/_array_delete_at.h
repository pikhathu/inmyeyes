/*
    Array _delete_at helper functions.
*/
#ifndef ARRAY_DELETE_AT_H
#define ARRAY_DELETE_AT_H

#include "../types.h"

int _array_delete_at_primitives(Array **arr, const size_t index);
int _array_delete_at_string(Array **arr, const size_t index);

#endif