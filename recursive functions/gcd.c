#include <stdio.h>
int main(void){
	int a, b, smallnum, gcd;
	printf("Enter the 2 numbers whose GCD is to be found: ");
	scanf("%d%d" , &a , &b);
	
	if (a < b){
		smallnum = a;
	}
	else{
		smallnum = b;
	}
	 while (smallnum >= 1){
	 	if (a % smallnum == 0 && b % smallnum == 0){
	 		gcd = smallnum;
	 		
	 		break;
		 }
		 smallnum--;
	 }
	printf("The GCD of %d and %d is %d" , a, b, gcd);
}