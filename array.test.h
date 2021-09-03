#ifndef nnc_array_test_h
#define nnc_array_test_h

// meta test where all other tests are called from
void testArrayImpl();

// test for array initialization
int testArrayInit(Array *a);
// test for growing the array
int testInsertArray(Array *a);
// test for freeing the array
int testFreeArray(Array *a);

#endif