#include <stdio.h>

#include "array.h"
#include "array.test.h"

void outputFailedTest(char fxnName[])
{
    puts(fxnName);
    printf(" failed\n");
}

int verifyEmptyArray(Array *a, char fxnName[])
{
    if (a->capacity == 0 && a->count == 0 && a->array == NULL)
    {
        return 0;
    }
    outputFailedTest(fxnName);
    return 1;
}

int testArrayInit(Array *a)
{
    initArray(a);
    return verifyEmptyArray(a, "testArrayInit");
};

int testFreeArray(Array *a)
{
    freeArray(a);
    return verifyEmptyArray(a, "testFreeArray");
}

int testInsertArray(Array *a, Value value)
{
    initArray(a);
    insertArray(a, value);

    if (a->capacity == 0 && a->count == 0 && a->array == NULL)
    {
        return 0;
    }
    printf("testArrayInit failed");
    return 1;
};

void testArrayImpl()
{
    int failedTests = 0;
    printf("Start array implementation tests.\n");

    Array a;

    failedTests += testArrayInit(&a);
    // failedTests += testInsertArray(&a);
    failedTests += testFreeArray(&a);

    printf("Total number of failed tests: %d.\n", failedTests);
    printf("End array implementation tests.\n");
}