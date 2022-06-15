#include <stdio.h>
int main(){
    int arr[10],sum=0;
    float avg;
    printf("Enter 10 Numbers: ");
    for(int i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum=sum+arr[i];
    }
    printf("The sum of all the numbers is: %d \n", sum);
    avg=sum/10.0;
    printf("The average of all the numbers is: %f \n", avg);
    

}