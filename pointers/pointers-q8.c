#include <stdio.h>
int main(){
	
	int array[5] = {1, 2, 3, 4, 5};
	int *printSecond = NULL;	
    printSecond = array;
    //method 1: usual way
	printf("The  element at index 2  is %d\n" , array[2]);
	
	//method 2: subscript notation, arr[i] == *(arr+i)
	printf("The  element at index 2  is %d\n" , *(array + 2));
	
	//method 3: 
	printf("The  element at index 2  is %d" , *(printSecond + 2));
	return 0;
}