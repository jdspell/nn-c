#include <stdio.h>

#include "array.h"
#include "memory.h"

initArray(Array *a)
{
    a->count = 0;
    a->capacity = 0;
    a->array = NULL;
}

void insertArray(Array *a, Value value)
{
    if (a->capacity < a->count + 1)
    {
        // grow the array
        a->capacity = GROW_CAPACITY(a->capacity);
        a->array = ADJUST_ARRAY(Array, a->array, a->capacity);
    }
    a->array[a->count] = value;
    a->count++;
}

void freeArray(Array *a)
{
    FREE_ARRAY(a->array);
    initArray(a);
}