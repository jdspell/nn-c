#include <stdio.h>
#include "common.h"

int main(void)
{
    int i = 3;
    printf("The int is: %d\n", i);
    int j = GROW_ARRAY(i);
    printf("The int is: %d\n", j);
}