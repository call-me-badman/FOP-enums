#include <stdio.h>
 void swap(int *a, int *b) {
    int temp;

temp = *a;
*a = *b;
*b = temp;
 }
 int main() {
    int x,y;
    printf("Enter the two numbers to be swaped: ");
    scanf("%d%d", &x, &y);

    printf("Before swap x = %d and y = %d\n", x, y);

    swap (&x, &y);
    printf("After swap x = %d and y = %d", x, y);

    return 0;
 }