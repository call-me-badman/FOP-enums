#include <stdio.h>
void increment_value(int *incrementNum){
 	*incrementNum += 1;
}
int main(){
	int x;
	printf("Enter the number to be incremented: ");
	scanf("%d" , &x);
	
	int *incrementNum = NULL;
	incrementNum = &x;
	
	increment_value(incrementNum);
	
	printf("The number is %d after being incremented" , *incrementNum);
	return 0;
}
