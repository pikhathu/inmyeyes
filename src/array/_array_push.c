#include <stdint.h>
#include <stdlib.h>
#include "str/str.h"
#include "types.h"
#include "array/_array_push.h"

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
                sizeof(void *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;

            double *copy = malloc(sizeof(double));

            if (copy == NULL)
                return -1;

            *copy = value;
            (*arr)->elements[(*arr)->count] = copy;
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

int _array_push_float(Array **arr, const float value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1) {
        size_t new_cap = 1;

        if ((*arr)->capacity < new_cap) {
            void **new_elements = malloc(sizeof(void *) * new_cap);

            if (new_elements == NULL)
                return -1;

            float *copy = malloc(sizeof(float));

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

        float *copy = malloc(sizeof(float));

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
                sizeof(void *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;

            float *copy = malloc(sizeof(float));

            if (copy == NULL)
                return -1;

            *copy = value;
            (*arr)->elements[(*arr)->count] = copy;
            (*arr)->count++;

            return 1;
        }

        float *copy = malloc(sizeof(float));

        if (copy == NULL)
            return -1;

        *copy = value;
        (*arr)->elements[(*arr)->count] = copy;
        (*arr)->count++;
    }

    return 1;
}

int _array_push_int(Array **arr, const int value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1) {
        size_t new_cap = 1;

        if ((*arr)->capacity < new_cap) {
            void **new_elements = malloc(sizeof(void *) * new_cap);

            if (new_elements == NULL)
                return -1;

            int *copy = malloc(sizeof(int));

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

        int *copy = malloc(sizeof(int));

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
                sizeof(void *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;

            int *copy = malloc(sizeof(int));

            if (copy == NULL)
                return -1;

            *copy = value;
            (*arr)->elements[(*arr)->count] = copy;
            (*arr)->count++;

            return 1;
        }

        int *copy = malloc(sizeof(int));

        if (copy == NULL)
            return -1;

        *copy = value;
        (*arr)->elements[(*arr)->count] = copy;
        (*arr)->count++;
    }

    return 1;
}

int _array_push_size_t(Array **arr, const size_t value) {
    if (arr == NULL || *arr == NULL)
        return -1;

    if ((*arr)->count < 1) {
        size_t new_cap = 1;

        if ((*arr)->capacity < new_cap) {
            void **new_elements = malloc(sizeof(void *) * new_cap);

            if (new_elements == NULL)
                return -1;

            size_t *copy = malloc(sizeof(size_t));

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

        size_t *copy = malloc(sizeof(size_t));

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
                sizeof(void *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;

            size_t *copy = malloc(sizeof(size_t));

            if (copy == NULL)
                return -1;

            *copy = value;
            (*arr)->elements[(*arr)->count] = copy;
            (*arr)->count++;

            return 1;
        }

        size_t *copy = malloc(sizeof(size_t));

        if (copy == NULL)
            return -1;

        *copy = value;
        (*arr)->elements[(*arr)->count] = copy;
        (*arr)->count++;
    }

    return 1;
}

int _array_push_string(Array **arr, const char *value) {
    if (arr == NULL || *arr == NULL || value == NULL)
        return -1;

    if ((*arr)->count < 1) {
        size_t new_cap = 1;

        if ((*arr)->capacity < new_cap) {
            void **new_elements = malloc(sizeof(void *) * new_cap);

            if (new_elements == NULL)
                return -1;

            char *copy = str_new(value);

            if (copy == NULL) {
                free(new_elements);
                return -1;
            }

            new_elements[0] = copy;
            free((*arr)->elements);
            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;
            (*arr)->count = 1;

            return 1;
        }

        char *copy = str_new(value);

        if (copy == NULL)
            return -1;

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
                sizeof(void *) * new_cap
            );

            if (new_elements == NULL)
                return -1;

            (*arr)->elements = new_elements;
            (*arr)->capacity = new_cap;

            char *copy = str_new(value);

            if (copy == NULL)
                return -1;

            (*arr)->elements[(*arr)->count] = copy;
            (*arr)->count++;

            return 1;
        }

        char *copy = str_new(value);

        if (copy == NULL)
            return -1;

        (*arr)->elements[(*arr)->count] = copy;
        (*arr)->count++;
    }

    return 1;
}