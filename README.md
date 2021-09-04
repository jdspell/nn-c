# nn-c

## Goal:

Write a neural network implementation that can predict the MNIST dataset.

### Implementation Notes

#### Tensor

Adding a dimension is fundamentally replacing all points within a dimension with an array. Removing a dimension is just the opposite.
Ex: A one dimension array having a dimension added:
[1,2,3] -> [[1,1,1], [2,2,2], [3,3,3]]

Ex: A two dimension array having a dimension added:
[[1,1,1], [2,2,2], [3,3,3]] ->
[[[1,1,1], [2,2,2], [3,3,3]], [[4,4,4], [5,5,5], [6,6,6]], [[7,7,7], [8,8,8], [9,9,9]]]
