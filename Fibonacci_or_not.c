#include<stdio.h>
int main()
{
    int n,a,c,b;
    scanf("%d",&n);
    a=0;
    b=1;
    if(n==0)
    {
        printf("fib series");
    }
    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}