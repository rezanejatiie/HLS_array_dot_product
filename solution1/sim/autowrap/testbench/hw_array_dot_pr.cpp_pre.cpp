# 1 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/hw_array_dot_pr.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/hw_array_dot_pr.cpp"


void hw_dot_product(int a[10], int b[10] , int &out)

{



   int product = 0;

   for(int i=0;i<10;i++) {
#pragma HLS unroll
     product += a[i] * b[i];
   }


out = product;

}
