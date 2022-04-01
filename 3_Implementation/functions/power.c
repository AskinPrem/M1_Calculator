#include"calculator.h"
void power(){
    double b,p,e;
    printf("Enter the base and the power: ");
    scanf("%lf %lf",&b,&p);
    e=pow(b,p);
    printf("The power is %lf",e);
}
