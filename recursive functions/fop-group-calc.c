#include<stdio.h>
int main(){
    printf("Welcome to RedBlue Calculations\n\n\n");
    int operation;
    float num1,num2,sum,difference,product,quotient;
    do{

        printf("\n\n-------OPERATIONS-----------\n");
        printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n5.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &operation);
        if(operation < 1 || operation > 5){
            printf("Invalid Choice!!\n\n\n\n");
            continue;
        }
        if(operation == 5){
            printf("Process exited successfully!\n");
                break;
        }
        printf("Enter the first number:\n");
        scanf("%f", &num1);
        printf("Enter the second number:\n");
        scanf("%f", &num2);
        switch(operation){
            case 1:
                sum = num1 + num2;
                printf("Sum is %.2f\n", sum);
                break;
            case 2:
                difference = num1 - num2;
                printf("Difference is %.2f\n", difference);
                break;
            case 3:
                product = num1 * num2;
                printf("Product is %.2f\n", product);
                break;
            case 4:
                if(num2 == 0){
                    printf("Divisin by zero is impossible!!\n");
                }else{
                    quotient = num1 / num2;
                    printf("Quotient is %.2f\n", quotient);
                }break;
            default:
                printf("Invalid input\n");
        }



    } while(operation != 5);
}