#include <stdint.h>
#include <stdlib.h>
#include "../../include/types.h"
#include "../../include/array/array_push.h"

int _array_push_double(Array **arr, const double value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1) {
        size_t new_cap = 1;

        if ((*arr)->capacity < new_cap) {
            void **new_elements = malloc(sizeof(void *) * new_cap);

            if (new_elements == NULL)
                return -1;

            double *copy = malloc(sizeof(double));

            if (copy == NULL) {
                free(new_elements);
                return -1;
            }

            *copy = value;
            new_elements[0] = copy;
            free((*arr)->elements);
            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;
            (*arr)->count = 1;

            return 1;
        }

        double *copy = malloc(sizeof(double));

        if (copy == NULL)
            return -1;

        *copy = value;
        (*arr)->elements[0] = copy;
        (*arr)->count = 1;

        return 1;
    } else {
        if ((*arr)->capacity <= (*arr)->count) {
            if ((*arr)->capacity > SIZE_MAX / 2) {
                return -1;
            }

            size_t new_cap = ((*arr)->capacity == 0) ?
                1 : (*arr)->capacity * 2;

            void **new_elements = realloc(
                (*arr)->elements,
                sizeof(double *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            double *copy = malloc(sizeof(double));

            if (copy == NULL) {
                (*arr)->elements = new_elements;
                return -1;
            }

            *copy = value;
            (*arr)->elements = new_elements;
            (*arr)->elements[(*arr)->count] = copy;
            (*arr)->capacity = new_cap;
            (*arr)->count++;

            return 1;
        }

        double *copy = malloc(sizeof(double));

        if (copy == NULL)
            return -1;

        *copy = value;
        (*arr)->elements[(*arr)->count] = copy;
        (*arr)->count++;
    }
    
    return 1;
}