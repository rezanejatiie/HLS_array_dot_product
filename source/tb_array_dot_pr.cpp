#include "iostream"
#include "sw_array_dot_pr.h"

using namespace std;



int main(void){

	int sw_dot;
	int hw_dot;

//	hw_dot = hw_dot_serial();
	//	hw_dot = hw_dot_serial();
	int sw_out = 0;
	int hw_out = 0;
	int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int u[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int v1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int u1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	hw_dot_product(v , u , hw_out);
	sw_dot_product(v1 , u1 , sw_out);

	cout << "hw_dot = " << hw_out << endl;
	cout << "sw_dot = " << sw_out << endl;

	if ( hw_out != sw_out ){
		cout << "hw dot failed" << endl;

	}
	else
	{

		cout << "hw dot OK" << endl;
	}
	return 0;
}
