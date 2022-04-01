#include"calculator.h"
void tangent(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = tan(x *3.14159 / 180);
    printf("\nTan(%.0f): %.2f",x,result);
}
