#include<stdio.h>

int main(){
    int n;
     int a;
    printf("Enter a number");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        a=i;
        for (int j = 1; j <= i; j++,a++)
        {
           
        printf("%d", a);
        }
        printf("\n");
    }
}   