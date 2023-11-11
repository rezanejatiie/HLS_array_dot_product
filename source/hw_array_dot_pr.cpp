#define N 10

void hw_dot_product(int a[N], int b[N] , int &out)

{

//	int a_int[N],b_int[N];
//	#pragma HLS array_partition  variable=a_int dim=1 complete
//	#pragma HLS array_partition  variable=b_int dim=1 complete
//
//	  for(int i=0;i<N;i++) {
//	  #pragma HLS pipeline
//	    a_int[i] = a[i];
//	  }
//	  for(int i=0;i<N;i++) {
//	  #pragma HLS pipeline
//	    b_int[i] = b[i];
//	  }

	  // vector dot products
	  int product = 0;

	  for(int i=0;i<N;i++) {
	  #pragma HLS unroll
	    product += a[i] * b[i];
	  }


out = product;

}
