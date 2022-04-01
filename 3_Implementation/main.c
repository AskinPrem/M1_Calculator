#include"calculator.h"
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
