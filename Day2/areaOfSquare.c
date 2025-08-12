#include<stdio.h>
#define pi 3.14
int areaOfSquare(int radius){
int Square = pi*(radius)*(radius);
return Square;
}

int main(){
    int radius;
    printf("Enter the Radius of the Square: ");
    scanf("%d",radius);

    int AreaSquare = areaofSquare(radius);
    printf("The Area of Square is: %d",AreaSquare);

    return 0;
}
