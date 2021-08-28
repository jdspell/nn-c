#include <stdio.h>

#include "array.h"
#include "array.test.h"

// void handleFailedTest()

int testArrayInit(Array *a)
{
    initArray(a);

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

    printf("Total number of failed tests: %d.\n", failedTests);
    printf("End array implementation tests.\n");
}