//Write a C program that accepts an employee's total worked hours of a month and the amount he received per hour. Print salary (with two decimal places) of a particular month
#include<stdio.h>

int main(){

    float h,s,total_salary;
    printf("Input working hours:");
    scanf("%f",&h);
    printf("salary amount/hr:");
    scanf("%f",&s);
    total_salary=h*s;
    printf("slary=%0.2f\n",total_salary);
    return 0;
}