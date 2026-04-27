#include <stdio.h>
int add(int a, int b) {return a + b;}
int (*fptr) (int, int) = add;
int main(){
    int x = 100, *p = &x, **pp = &p;
printf ("%d\n", **pp);
printf("%d", fptr(100, 300));
return 0;

}