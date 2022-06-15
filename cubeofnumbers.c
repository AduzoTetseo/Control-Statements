#include<stdio.h>

int main(){
    int a,temp;
    printf("Enter n number to print cubes for:  ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        temp=i*i*i;
        printf("The cube of %d is : %d \n", i , temp);
    }   

    
}