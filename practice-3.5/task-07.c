//Write a C program to input temperature in Centigrade and convert to Fahrenheit
#include<stdio.h>
int main(){

    float c,f;
    printf("Enter temperature in celcius=");
    scanf( "%f",&c);
    f=(c*9)/5+32;
    printf("Temperature in farenhite=%0.1f\n",f);
    return 0;
}