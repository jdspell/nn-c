#include <stdio.h>
#include "array.test.h"

void testsCheck()
{

    char runTests;
    printf("Run implementation tests(y/n): ");
    scanf("%c", &runTests);

    if (runTests == 'y')
    {
        testArrayImpl();
    }
}

int main(void)
{
    testsCheck();
    return 0;
}