#include"calculator.h"
void cube(){
    double b,p;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
