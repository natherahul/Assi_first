#include<stdio.h>
int main()
{
    int a,b;
    printf("before swapping variables are:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping variables are a=%d and b=%d",a,b);
}