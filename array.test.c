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

void initTestArray(Array *a)
{
    const int SIZE = 9; // chose a size larger then initial array capacity set in GROW_CAPACITY
    Value values[9] = {0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 9.0};
    for (int i = 0; i < SIZE; i++)
    {
        insertArray(a, values[i]);
    }
}

int testInsertArray(Array *a)
{
    // initialize array then fill it with some test values
    initArray(a);
    initTestArray(a);

    if (a->capacity == 16 && a->count == 9 && a->array[0] == 0.0 && a->array[a->count - 1] == 9.0)
    {
        return 0;
    }

    outputFailedTest("testArrayInit");
    return 1;
};

int testFreeArray(Array *a)
{
    freeArray(a);
    return verifyEmptyArray(a, "testFreeArray");
}

void testArrayImpl()
{
    int failedTests = 0;
    printf("\nStart array implementation tests.\n");

    Array a;

    failedTests += testArrayInit(&a);
    failedTests += testInsertArray(&a);
    // note to call testFreeArray last to free memory on the last test
    failedTests += testFreeArray(&a);

    printf("Total number of failed tests: %d.\n", failedTests);
    printf("End array implementation tests.\n\n");
}