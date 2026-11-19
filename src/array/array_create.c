#include <stdlib.h>
#include "../../include/types.h"
#include "../../include/array/array_create.h"

Array *_array_create_double(void) {
    Array *new_arr = malloc(sizeof(Array));

    if (new_arr == NULL)
        return NULL;

    new_arr->capacity = 0;
    new_arr->count = 0;
    new_arr->elements = NULL;
    new_arr->type = DOUBLE;

    return new_arr;
}

Array *_array_create_float(void) {
    Array *new_arr = malloc(sizeof(Array));

    if (new_arr == NULL)
        return NULL;

    new_arr->capacity = 0;
    new_arr->count = 0;
    new_arr->elements = NULL;
    new_arr->type = FLOAT;

    return new_arr;
}

Array *_array_create_int(void) {
    Array *new_arr = malloc(sizeof(Array));

    if (new_arr == NULL)
        return NULL;

    new_arr->capacity = 0;
    new_arr->count = 0;
    new_arr->elements = NULL;
    new_arr->type = INT;

    return new_arr;
}

Array *_array_create_size_t(void) {
    Array *new_arr = malloc(sizeof(Array));

    if (new_arr == NULL)
        return NULL;

    new_arr->capacity = 0;
    new_arr->count = 0;
    new_arr->elements = NULL;
    new_arr->type = SIZE_T;

    return new_arr;
}

Array *_array_create_string(void) {
    Array *new_arr = malloc(sizeof(Array));

    if (new_arr == NULL)
        return NULL;

    new_arr->capacity = 0;
    new_arr->count = 0;
    new_arr->elements = NULL;
    new_arr->type = STRING;

    return new_arr;
}