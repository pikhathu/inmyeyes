#ifndef TEST_ASSERT_H
#define TEST_ASSERT_H

#include <stdio.h> // IWYU pragma: keep
#include "constants/colors.h"

#define TEST_ASSERT(cond, context) \
    do { \
        if (!(cond)) { \
            fprintf(stderr, "%s: " CLR_RED "FAILED" CLR_RESET " (%s:%d) - %s (%s)\n", \
                    __func__, __FILE__, __LINE__, (context), #cond); \
            goto cleanup; \
        } \
    } while (0)

#endif