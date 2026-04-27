#include <stdio.h>
int main(){
int x = 10;
int *p = &x;
*p = 25;
int y = x + 15;
*p = &y;
printf("%d\n" , *p);
return 0;
}

