#include <stdio.h>
int fibonacci(int j){
	if (j == 0){
		return 0;
	}
	else if(j == 1){
		return 1;
	}
	return fibonacci(j-1)+fibonacci(j-2);
}
int main(){
	int j, k;
	printf("Enter the limit number of fibonacci series: ");
	scanf("%d" , &j);
	prinf("Fibonacci series: ");
	while(j <= k){
		fibonacci(k);
	}
	
}