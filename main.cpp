
#include <iostream>
#include "Tuple.h"

using namespace std;

int main()
{
	
	
	float* arr_a = new float[4];
	arr_a[0]=5;
	arr_a[1]=4;
	arr_a[2]=6;
	arr_a[3]=3;
	float* arr_b = new float[3];
	arr_b[0]=100;
	arr_b[1]=500;
	arr_b[2]=2;
	float* arr_c = new float[4];
	arr_c[0]=13;
	arr_c[1]=25;
	arr_c[2]=67;
	arr_c[3]=80;
		
	tuple a(4,arr_a);
	tuple b(3,arr_b);
	tuple c(4,arr_c);
	
/*
	Testing Phase
*/
	
	a.add(b);
	a.add(c);
	a.getTuple();
	a.getLenght();

//	a.copy(b);
//	a.copy(c);
//	a.getTuple();
//	a.getLenght();

//	a.substract(b);
//	a.substract(c);
//	a.getTuple();
//	a.getLenght();

//	a.setLength(5);
//	a.getLenght();
//	a.getTuple();

//	a.append(b);
//	a.getTuple();
//	a.getLenght();
	
	return 0;	
}
