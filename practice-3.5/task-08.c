//Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.

#include<stdio.h>

int main(){

    float f,c;
    printf("Temperature in farenhite=");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("Temperature in celcius=%0.2f\n",c);
    return 0;
}