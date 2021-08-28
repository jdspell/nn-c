#ifndef nnc_memory_h
#define nnc_memory_h

#include "common.h"

// arrays will all be allocated at least 8 bytes
// if an arrays contents outgrow it then double the array capacity
#define GROW_CAPACITY(size) (size < 8 ? 8 : size * 2)

// adjust the array size by passing in the desired capacity
#define ADJUST_ARRAY(type, array, size) ((type *)reallocate(array, size))

// allocating size 0 will free the array
#define FREE_ARRAY(array) (reallocate(array, 0))

void *reallocate(void *pointer, size_t size);

#endif