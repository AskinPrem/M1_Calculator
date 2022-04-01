#include"calculator.h"
void squareroot(){
    double b,s;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
