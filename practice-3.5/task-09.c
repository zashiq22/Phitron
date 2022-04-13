//Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
#include<stdio.h>

int main(){

    int n,d,m,y;
    printf("Input No. of days:");
    scanf("%d",&n);
    y=n/365;
    m=(n%365)/30;
    d=(n%365)%30;
    printf("%d years\n",y);
    printf("%d months\n",m);
    printf("%d days\n",d);
    return 0;
}