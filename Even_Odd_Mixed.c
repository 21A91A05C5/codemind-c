#include<stdio.h>
int main()
{
    int n,c=0,l=0,m=0,k=0,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        c++;
        n=n/10;
        if(r%2==0)
        {
            l++;
        }
        else if(r%2!=0)
        {
            m++;
        }
        else
        {
            k++;
        }
    }
    if(l==c)
    {
        printf("Even");
    }
    else if(m==c)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}