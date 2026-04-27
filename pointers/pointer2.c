#include <stdio.h>
int main(){
    int arr[] = {10, 20,30, 40, 50};
    int *p = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The array elements are: \n =================================== \n");
 for (int a = 0; a < size; a++ )
 printf("%d\n", *(p+a));
    printf("The end \n ===================================");
}