#include <stdlib.h>
#include <stdio.h>

#include "tensor.h"

void *reallocate(void *pointer, size_t newSize)
{
    // check if new size is zero. if so free the memory
    if (newSize == 0)
    {
        free(pointer);
        return NULL;
    }
    // else reallocate the pointer to the new size
    void *result = realloc(pointer, newSize);
    // check the returned pointer is not null ( if so exit(1) )
    if (result == NULL)
        exit(1);
    // return reallocated array
    return result;
}