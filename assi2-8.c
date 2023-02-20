#include<stdio.h>
int main()
{
    int num,n;
    printf("enter the number:");
    scanf("%d",&num);
    n=num^1;
    if(n==num+1)
        printf("%d is even number",num);
    else
        printf("%d is odd number",num);
    return 0;
}