#include<stdio.h>
int digit_count(int n)
{
    if(n==0)
    {
        return 1;
    }
    int i,dc=0,d;
    while(n)
    {
        d=n%10;
        n=n/10;
        dc++;
    }
    return dc;
}
int main()
{
    int n,i,arr[100],p,dc,min=0,c=0,h;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        p=digit_count(arr[i]);
        printf("%d ",p);
    }
}