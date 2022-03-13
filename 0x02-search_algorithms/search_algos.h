#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*major functions*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
/*helper functions*/
size_t two_val_min(size_t x, size_t y);
int binary_search_short_arr(int *array, int left_i, int right_i, int value);

#endif /* SEARCH_ALGOS_H */
