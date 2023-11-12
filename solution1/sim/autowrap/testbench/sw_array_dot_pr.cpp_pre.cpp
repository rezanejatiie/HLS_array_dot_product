# 1 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/sw_array_dot_pr.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/sw_array_dot_pr.cpp"
# 1 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/sw_array_dot_pr.h" 1


void sw_dot_product(int a[10], int b[10] , int &out);
void hw_dot_product(int a[10], int b[10] , int &out);
# 2 "D:/AA_ProgramFiles/HLS_Project/dot_product/source/sw_array_dot_pr.cpp" 2



void sw_dot_product(int *a, int *b , int &out)
{



  int product = 0;

  for (int i = 0; i < 10; ++i){

    product += a[i] * b[i];
  }

  out = product;
}
