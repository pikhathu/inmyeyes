/*
    All type definitions used throughout the project.
*/
#ifndef TYPES_H
#define TYPES_H

#include <stdlib.h>
typedef enum {
    DOUBLE,
    FLOAT,
    INT,
    SIZE_T,
    STRING
} Type;

typedef struct ArrayStruct {
    size_t count;
    size_t capacity;
    void **elements;
    Type type;
} Array;

#endif