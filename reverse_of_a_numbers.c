#include<stdio.h>
int main()
{
    int n,i,rem,rev=0;
    scanf("%d",&n);
    for(i=0;n!=0;n=n/10)
    {
        rem=n%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
}