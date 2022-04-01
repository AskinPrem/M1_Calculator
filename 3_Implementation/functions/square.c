#include"calculator.h"
void square(){
    double b,p;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
