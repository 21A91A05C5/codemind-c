#include<stdio.h>
int main()
{
    int sum=0,temp,rem,n;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}