#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num=num%10;
    printf("unit digit of number is %d",num);
}