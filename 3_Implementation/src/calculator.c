#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "Please enter valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void naturallog();
void sine();
void cosine();
void tangent();

int main(){
    printf("\t\tWelcome to the scientific calculator!!\n\n");
    int choice;
    printf("\n******* Press 0 to exit the program *******\n");
    printf("Enter 1  for Addition \n");
    printf("Enter 2  for Subtraction \n");
    printf("Enter 3  for Multiplication \n");
    printf("Enter 4  for Division \n");
    printf("Enter 5  for Modulus\n");
    printf("Enter 6  for Power \n");
    printf("Enter 7  for Factorial \n");
    printf("Enter 8  for Square \n");
    printf("Enter 9  for Cube \n");
    printf("Enter 10 for Squareroot\n");
    printf("Enter 11 for Natural log\n");
    printf("Enter 12 for Sine\n");
    printf("Enter 13 for Cosine\n");
    printf("Enter 14 for Tangent\n");

    while(1){
    printf("\n\nEnter the operation you want to perform: ");

    scanf("%d",&choice);

    switch(choice)
    {
                case 1:
                    addition();
                    break;
                case 2:
                    subtraction();
                    break;
                case 3:
                    multiplication();
                    break;
                case 4:
                    division();
                    break;
                case 5:
                    modulus();
                    break;
                case 6:
                    power();
                    break;
                case 7:
                    factorial();
                    break;
                case 8:
                    square();
                    break;
                case 9:
                    cube();
                    break;
                case 10:
                    squareroot();
                    break;
                case 11:
                    naturallog();
                    break;
                case 12:
                    sine();
                    break;
                case 13:
                    cosine();
                    break;
                case 14:
                    tangent();
                    break;
                case 0:
                    exit(0);
                default:
                    printf("\n********** %s ***********\n",note);
        }

    }
    return 0;
}

void addition(){
    printf("Enter the numbers you want to add: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum of a and b is %d\n",a+b);
}
void subtraction(){
    printf("Enter the numbers you want to subtract: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The subtraction of a and b is %d\n",a-b);
}
void multiplication(){
    printf("Enter the numbers you want to multiply: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The multiplication of a and b is %d\n",a*b);
}
void division(){
    printf("Enter the numbers you want to divide: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The division of a and b is %f\n",(float)a/(float)b);
}
void modulus(){
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of a and b is %d\n",a%b);
}
void factorial(){
    int n,factorial;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(int i=1;i<=n;i++){
        factorial=factorial*i; // factorial*=i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
}
void power(){
    double b,p,e;
    printf("Enter the base and the power: ");
    scanf("%lf %lf",&b,&p);
    e=pow(b,p);
    printf("The power is %lf",e);
}
void square(){
    double b,p;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
}
void cube(){
    double b,p;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
}
void squareroot(){
    double b,s;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
}
void naturallog(){
    double n, result;
    printf("Enter a number to calculate its natural logarithm (base = e) :\n");
    scanf("%lf", &n);
    result = log(n);
    printf("Natural log of %.2lf = %lf\n", n, result);
}
void sine(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = sin(x *3.14159 / 180);
    printf("\nSin(%.0f): %.2f",x,result);
}
void cosine(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = cos(x *3.14159 / 180);
    printf("\nCos(%.0f): %.2f",x,result);
}
void tangent(){
    float x,result;
    printf("Enter the value of x:");
    scanf("%f", &x);
    result = tan(x *3.14159 / 180);
    printf("\nTan(%.0f): %.2f",x,result);
}
