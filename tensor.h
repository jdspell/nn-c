#ifndef nnc_tensor_h
#define nnc_tensor_h

#define GROW_CAPACITY(size) (size < 8 ? 8 : size * 2)

#define GROW_ARRAY(array) ()

typedef double Value;

typedef struct
{
    int count;
    int capacity;
    Value *array;
} Array;

void initArray(Array *array);
void insertArray(Array *array, Value value);
void removeArray(Array *array);
void freeArray(Array *array);

#endif