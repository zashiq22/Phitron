//Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

#include<stdio.h>
int main(){

    float w1,w2,avg;
    int n1,n2;
    printf("weight-item1:");
    scanf("%f",&w1);
    printf("No. of item-1:");
    scanf("%d",&n1);
    printf("weight-item2:");
    scanf("%f",&w2);
    printf("No. of item-2:");
    scanf("%d",&n2);
    avg=(w1*n1+w2*n2)/(n1+n2);
    printf("Average value=%f",avg);
    return 0;
}