#include <stdio.h>
#include "constants/colors.h"
#include "str/str.h"
#include "tests/test_assert.h"
#include "tests/str/str_tests.h"

int test_str_new_and_destroy(void) {
    printf(CLR_U_WHITE "%s" CLR_RESET ": ", __func__);

    int status = 1;
    char *heaven = str_new("heaven");

    TEST_ASSERT(heaven != NULL, "string `heaven` should not be null");

    str_destroy(heaven);

    heaven = NULL;
    status = 0;

    printf(CLR_GREEN "Passed" CLR_RESET "\n");

    cleanup:
        free(heaven);
        return status;
}

int test_str_len(void) {
    printf(CLR_U_WHITE "%s" CLR_RESET ": ", __func__);

    int status = 1;

    TEST_ASSERT(
        str_len("is phenomenal") == 13,
        "string length should be 13"
    );

    status = 0;

    printf(CLR_GREEN "Passed" CLR_RESET "\n");

    cleanup:
        return status;
}

int test_str_compare(void) {
    printf(CLR_U_WHITE "%s" CLR_RESET ": ", __func__);

    int status = 1;

    TEST_ASSERT(
        str_compare("heaven", "heaven") == 0,
        "comparison result should be 0"
    );

    TEST_ASSERT(
        str_compare("heaven", "is") == -1,
        "comparison result should be 1"
    );

    TEST_ASSERT(
        str_compare("is", "heaven") == 1,
        "comparison result should be 1"
    );

    status = 0;

    printf(CLR_GREEN "Passed" CLR_RESET "\n");

    cleanup:
        return status;
}