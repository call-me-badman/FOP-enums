#include <stdio.h>
int main(){
    int x = 100, *ptr = &x;
    *ptr = 500;
    printf("The new value of x : %p\n", ptr);
    printf("The new value of x : %d", *ptr);

}