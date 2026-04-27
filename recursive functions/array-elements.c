#include <stdio.h>
int arrayelements(int array[] , int k ){
	if (k < 0){
		return 0;
	}
	arrayelements(array, k-1);
	printf("%d\n" , array[k]);
	return 0;
}
int main(){
	int k, array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	printf("The elements of our array are: ");
	arrayelements(array , 9); 	
	return 0;
}