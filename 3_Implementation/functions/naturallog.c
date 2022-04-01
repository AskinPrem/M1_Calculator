#include"calculator.h"
void naturallog(){
    double n, result;
    printf("Enter a number to calculate its natural logarithm (base = e) :\n");
    scanf("%lf", &n);
    result = log(n);
    printf("Natural log of %.2lf = %lf\n", n, result);
}
