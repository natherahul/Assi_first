#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    num=num/10;
    printf("number without its last digit is %d",num);
}