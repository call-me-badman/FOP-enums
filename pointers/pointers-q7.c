#include <stdio.h>
int main(){
	int array[5] = {10, 20, 30, 40, 50};
	int *traverseArr = array;
	
	for (int index = 0; index < 5; index++)
	printf("%d " , *(traverseArr + index ));
	
	return 0;
}