
long int f(int n){
	//base case
 if (n == 0 || n == 1) 	return 1;
 
 else  	///recursive step
 	return n*f(n-1);
	 }
	int main(){
		int n;
		printf("Enter the number whose factorial is to be found: ");
		scanf("%d" , &n);
		long int fact = f(n);
		printf("The factorial of %d is %d", n ,fact );
		return 0;
	}