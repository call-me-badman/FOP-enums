#include <stdio.h>
void increment(int *num) {
    (*num)++;
}
int main(){
    int n;
    printf("Enter the number to be incremented: ");
    scanf("%d\n", &n);

    increment(&n);
    printf("Value after the incrementation is %d", n);

    return 0;

}