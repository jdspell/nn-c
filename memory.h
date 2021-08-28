#ifndef nnc_memory_h
#define nnc_memory_h

#include "common.h"

#define GROW_CAPACITY(size) (size < 8 ? 8 : size * 2)

#define GROW_ARRAY(array) ()

#define FREE_ARRAY(array, size) (reallocate(array, 0))

void *reallocate(void *pointer, size_t size);

#endif