#include"calculator.h"
void cosine(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = cos(x *3.14159 / 180);
    printf("\nCos(%.0f): %.2f",x,result);
}
