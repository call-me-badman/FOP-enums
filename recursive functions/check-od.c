#include <stdio.h>
int checknum(int a){
	if (a % 2 == 0)printf("%d if even" , a);
	else if(a % 2 == 1) printf("%d is odd" , a);
}
int main(void){
	int a;
    if (scanf("%d" , &a) !=1){
    	printf("Invalid input!");
	}
	checknum(a);
	}