#include <stdio.h>
int main(void){
	float *ptrFloat = NULL;
	float a[5] = {1.2, 3.5, 5.7, 3.8, 0.12 };
	ptrFloat = a;
//	printf("%.2f\n" , *(ptrFloat+1));
	for (int i = 0; i <= 4; i++)
	printf("%.2f\n", *(ptrFloat+i));
	}   