#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two numbers:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the swapping of two variables is a=%d and b=%d",a,b);

}