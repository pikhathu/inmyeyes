#ifndef TEST_ASSERT_H
#define TEST_ASSERT_H

#include <stdio.h> // IWYU pragma: keep
#include "constants/colors.h"

#define TEST_ASSERT(cond) \
    do { \
        if (!(cond)) { \
            fprintf(stderr, CLR_RED "FAILED" CLR_RESET "(%s:%d): %s\n", __FILE__, __LINE__, #cond); \
            goto cleanup; \
        } \
    } while (0)

#endif