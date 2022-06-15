#include <stdio.h>
int main(){
    int n;
    float temp;
    int a;
     float breadth,h;
      int l,b;
    
    printf("For Square press 1: \n");
    printf("For Traingle press 2: \n");
    printf("For Rectangle press 3: \n");
    printf("Please select the enter the number you want to select: ");
    scanf("%d", &n);
    
    switch (n)
    {
    case 1:
        
        printf("Please enter the value of a side: ");
        scanf("%d", &a);
        temp=2*a;
        printf("The area of the square is %d \n", temp);
        break;
    case 2:
       
        printf("Please enter the Breadth and Height: ");
        scanf("%d%d", &breadth ,&h);
        temp=.5*breadth*h;
        printf("The area of the traingle is %d", temp);x`
        break;
    case 3:
       
        printf("Please enter the length and breadth: ");
        scanf("%d %d", &l,&b);
        temp= l*b;
        printf("The area of rectangle is %d", temp);    
    default:
        break;
    }
}           