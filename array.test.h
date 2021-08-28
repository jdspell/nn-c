#ifndef nnc_array_test_h
#define nnc_array_test_h

// meta test where all other tests are called from
void testArrayImpl();

// test for array initialization
void testArrayInit();
// test for growing the array
void testAdjustArraySmaller();
// test for shrinking the array
void testAdjustArrayBigger();
// test for freeing the array
void testFreeArray();

#endif