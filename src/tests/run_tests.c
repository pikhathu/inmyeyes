#include <stdio.h>
#include "constants/colors.h"
#include "tests/str/str_tests.h"
#include "tests/run_tests.h"

void run_tests(void) {
    int failed = 0;

    failed += test_str_new_and_destroy();
    failed += test_str_len();
    failed += test_str_compare();

    if (failed > 0)
        printf(CLR_RED "%d tests failed" CLR_RESET "\n", failed);
}