//Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
#include<stdio.h>

int main(){

    double p,t,r,si;
    printf("Enter principle:");
    scanf("%lf",&p);
    printf("Enter time:");
    scanf("%lf",&t);
    printf("Enter rate:");
    scanf("%lf",&r);
    si=(p*t*r)/100;
    printf("simple interest=%lf\n",si);
    printf("principle+interest=%0.1lf\n",p+si);
    return 0;
}