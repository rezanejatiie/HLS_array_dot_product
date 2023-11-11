#define N 10

void hw_dot_product(int a[N], int b[N] , int &out)

{


	  // vector dot products
	  int product = 0;

	  for(int i=0;i<N;i++) {
	  #pragma HLS unroll
	    product += a[i] * b[i];
	  }


out = product;

}
