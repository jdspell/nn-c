#ifndef nnc_tensor_h
#define nnc_tensor_h

#include "array.h"

typedef struct
{
    Array *values;
    int dimensions;
} Tensor;

void addDimension(Tensor *);
void removeDimension(Tensor *);

Value getPointValue(Tensor *);
Value setPointValue(Tensor *);

#endif