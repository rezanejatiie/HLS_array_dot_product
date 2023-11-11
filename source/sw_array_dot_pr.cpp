#include "sw_array_dot_pr.h"

#define N 10

void sw_dot_product(int *a, int *b , int &out)
{


  // vector dot products
  int product = 0;

  for (int i = 0; i < 10; ++i){

    product += a[i] * b[i];
  }

  out =  product;
}
