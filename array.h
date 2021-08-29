#ifndef nnc_array_h
#define nnc_array_h

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

typedef double Value;

typedef struct
{
    int count;
    int capacity;
    Value *array;
} Array;

void initArray(Array *array);
void insertArray(Array *array, Value value);
void freeArray(Array *array);

#endif