#include"calculator.h"
void sine(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = sin(x *3.14159 / 180);
    printf("\nSin(%.0f): %.2f",x,result);
}
