#include <stddef.h>
#include <stdlib.h>
#include "types.h"
#include "array/array.h"
#include "array/_array_contains.h"
#include "array/_array_create.h"
#include "array/_array_delete_at.h"
#include "array/_array_delete.h"
#include "array/_array_destroy.h"
#include "array/_array_find.h"
#include "array/_array_index_of.h"
#include "array/_array_pop.h"
#include "array/_array_print.h"
#include "array/_array_push.h"

Array *array_create(const Type type) {
    switch (type) {
        case DOUBLE:
            return _array_create_double();
        case FLOAT:
            return _array_create_float();
        case INT:
            return _array_create_int();
        case SIZE_T:
            return _array_create_size_t();
        case STRING:
            return _array_create_string();
        default:
            return NULL;
    }
}

int array_index_of(Array **arr, const void *value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    switch ((*arr)->type) {
        case DOUBLE:
            return _array_index_of_double(arr, *(double *)value);
        case FLOAT:
            return _array_index_of_float(arr, *(float *)value);
        case INT:
            return _array_index_of_int(arr, *(int *)value);
        case SIZE_T:
            return _array_index_of_size_t(arr, *(size_t *)value);
        case STRING:
            return _array_index_of_string(arr, (char *)value);
        default:
            return -1;
    }
}

int array_push(Array **arr, const void *value) {
    if (arr == NULL || *arr == NULL || value == NULL)
        return -1;

    switch ((*arr)->type) {
        case DOUBLE:
            return _array_push_double(arr, *(double *)value);
        case FLOAT:
            return _array_push_float(arr, *(float *)value);
        case INT:
            return _array_push_int(arr, *(int *)value);
        case SIZE_T:
            return _array_push_size_t(arr, *(size_t *)value);
        case STRING:
            return _array_push_string(arr, (char *)value);
        default:
            return -1;
    }
}

void *array_pop(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return NULL;

    switch ((*arr)->type) {
        case DOUBLE:
            return _array_pop_double(arr);
        case FLOAT:
            return _array_pop_float(arr);
        case INT:
            return _array_pop_int(arr);
        case SIZE_T:
            return _array_pop_size_t(arr);
        case STRING:
            return _array_pop_string(arr);
        default:
            return NULL;
    }
}

int array_delete(Array **arr, const void *value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    switch((*arr)->type) {
        case DOUBLE:
            return _array_delete_double(arr, *(double *)value);
        case FLOAT:
            return _array_delete_float(arr, *(float *)value);
        case INT:
            return _array_delete_int(arr, *(int *)value);
        case SIZE_T:
            return _array_delete_size_t(arr, *(size_t *)value);
        case STRING:
            return _array_delete_string(arr, (char *)value);
        default:
            return -1;
    }
}

int array_delete_at(Array **arr, const size_t index) {
    if (arr == NULL || *arr == NULL)
        return -1;

    switch((*arr)->type) {
        case DOUBLE:
        case FLOAT:
        case INT:
        case SIZE_T:
            return _array_delete_at_primitives(arr, index);
        case STRING:
            return _array_delete_at_string(arr, index);
        default:
            return -1;
    }
}

void *array_find(Array **arr, const void *value) {
    if (arr == NULL || *arr == NULL || value == NULL)
        return NULL;

    switch((*arr)->type) {
        case DOUBLE:
            return _array_find_double(arr, *(double *)value);
        case FLOAT:
            return _array_find_float(arr, *(float *)value);
        case INT:
            return _array_find_int(arr, *(int *)value);
        case SIZE_T:
            return _array_find_size_t(arr, *(size_t *)value);
        case STRING:
            return _array_find_string(arr, (char *)value);
        default:
            return NULL;
    }
}

int array_contains(Array **arr, const void *value) {
    if (arr == NULL || *arr == NULL || value == NULL)
        return 0;

    switch((*arr)->type) {
        case DOUBLE:
            return _array_contains_double(arr, *(double *)value);
        case FLOAT:
            return _array_contains_float(arr, *(float *)value);
        case INT:
            return _array_contains_int(arr, *(int *)value);
        case SIZE_T:
            return _array_contains_size_t(arr, *(size_t *)value);
        case STRING:
            return _array_contains_string(arr, (char *)value);
        default:
            return 0;
    }
}

void array_destroy(Array **arr) {
    if (arr == NULL || *arr == NULL)
        return;

    switch((*arr)->type) {
        case DOUBLE:
        case FLOAT:
        case INT:
        case SIZE_T:
            return _array_destroy_primitives(arr);
        default:
            return;
    }
}

void array_print(const Array **arr) {
    if (arr == NULL || *arr == NULL)
        return;

    switch ((*arr)->type) {
        case DOUBLE:
            return _array_print_double(arr);
        case FLOAT:
            return _array_print_float(arr);
        case INT:
            return _array_print_int(arr);
        case SIZE_T:
            return _array_print_size_t(arr);
        case STRING:
            return _array_print_string(arr);
        default:
            return;
    }
}