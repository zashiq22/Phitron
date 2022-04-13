//Write a C program that takes a positive float number and outputs its integer part and real part.
#include<stdio.h>

int main(){

    float a;
    printf("Enter number:");
    scanf("%f",&a);
    printf("Integer part:%d\n",(int)a);
    printf("Decimal part:%0.3f\n",a-(int)a);
    return 0;
}