/*
    Custom array library.
*/
#ifndef ARRAY_H
#define ARRAY_H

#include<stdlib.h>
#include "../types.h"

Array *array_create(const Type type);
int array_index_of(Array **arr, const void *value);
int array_push(Array **arr, const void *value);
void *array_pop(Array **arr);
int array_delete(Array **arr, const void *value);
int array_delete_at(Array **arr, const size_t index);
void *array_find(Array **arr, const void *value);
int array_contains(Array **arr, const void *value);
void array_destroy(Array **arr);
void array_print(const Array **arr);

#endif