#include <stdio.h>

#include "array.h"

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
    }
    a->array[a->count] = value;
    a->count++;
}