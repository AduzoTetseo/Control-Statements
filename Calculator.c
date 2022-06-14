#include <stdio.h>

int main(){
    int a,temp;
    int num1, num2;
    printf("1.To add \n");
    printf("2. To Subtract \n");
    printf("3. To Multiply \n");
    printf("4. To Devide \n");
    printf("5. To Module \n");
    printf("Please Enter the option you wish to proceed with: ");
    scanf("%d", &a);
    if (a>5){
        printf("Invalid Input");
    }else{
    printf("Please enter your numbers");
    scanf("%d%d", &num1, &num2);
    
    switch (a)
    {
    case 1:
        temp= num1+num2;
        printf("The addition of the numbers are: %d", temp);
        break;
    case 2:
        temp=num1-num2;
        printf("The Subtraction of the numbers are: %d", temp);
        break;    
    case 3:
        temp=num1*num2;
        printf("The Multiplication of the two numbers are: %d", temp);
        break;
    case 4:
        temp=num1/num2;
        printf("The division of the two numbers are: %d", temp);
        break;
    case 5:
        temp=num1%num2;
        printf("The modula of the two numbers are: %d", temp);
        break;    
    default:
        break;
    }}
}