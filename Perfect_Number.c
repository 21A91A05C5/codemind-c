#include<stdio.h>
int main()
{
    int n,c,sum=0;
    scanf("%d",&n);
    for(c=1;c<n;c++)
    {
        if(n%c==0)
        {
            sum=sum+c;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else 
    {
        printf("False");
    }
}