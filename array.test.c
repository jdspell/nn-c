#include <stdio.h>

#include "array.h"
#include "array.test.h"

int testInsertArray(Array *a, Value value)
{

    insertArray(a, value);

    if (a->capacity == 0 && a->count == 0 && a->array == NULL)
    {
        return 0;
    }
    printf("testArrayInit failed");
    return 1;
};

int verifyEmptyArray(Array *a)
{

    if (a->capacity == 0 && a->count == 0 && a->array == NULL)
    {
        return 0;
    }
    return 1;
}

int testArrayInit(Array *a)
{
    initArray(a);
    int result = verifyEmptyArray(a);
    if (result > 0)
    {
        printf("testArrayInit failed");
    }
    return result;
};

int testFreeArray(Array *a)
{
    freeArray(a);
    int result = verifyEmptyArray(a);
    if (result > 0)
    {
        printf("testFreeArray failed");
    }
    return result;
}

void testArrayImpl()
{
    int failedTests = 0;
    printf("Start array implementation tests.\n");

    Array a;

    failedTests += testArrayInit(&a);
    failedTests += testInsertArray(&a);
    failedTests += testFreeArray(&a);

    printf("Total number of failed tests: %d.\n", failedTests);
    printf("End array implementation tests.\n");
}