//Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.

#include<stdio.h>

int main(){

    int a,b;
    printf("First number:");
    scanf("%d",&a);
    printf("Second number:");
    scanf("%d",&b);
    printf("sum:%d\n",a+b);
    printf("Difference:%d\n",a-b);
    printf("Product:%d\n",a*b);
    printf("Quotient:%0.2f\n",(float)a/(float)b);
    printf("Modulus:%d\n",a%b);
    return 0;
}