#include <stdio.h>
    void function(int *x){
        *x = 20;
    }
int main(){
    int a = 10;
    int *aptr;
    aptr = &a;//10
    printf("The value of a from here is %d\n", a);
    function(aptr);
    printf("The final value of a is %d ", a);//20
return 0;
}