#include <stdio.h>
	int sum = 0;
int sum_array(int length, int *arraySum){
	for (int y = 0; y < length; y++)
	sum += *(arraySum + y);
	return sum;
}
int main(void){
	int array [10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int *arraySum = array;
	printf("The sum of all elements of our array is %d", sum_array(10 , array));	
}