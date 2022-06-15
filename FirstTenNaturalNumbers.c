#include <stdio.h>

int main(){
    int a, temp=0;
    printf("Enter the number of natural Numbers you want: ");
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        printf("%d \n", i);
    }
    printf("And the Sum of the first 10 Natural Numbers is: ");
    for(int i=1;i<=a;i++){
        temp=temp+i;
    }    
    printf("%d", temp);
}