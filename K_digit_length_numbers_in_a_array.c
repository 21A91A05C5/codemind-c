#include<stdio.h>
int main()
{
    int n,arr[100],i,d,t,k,c,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        t=arr[i];
        if(arr[i]==0)
        {
            c=1;
        }
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(c==k)
        {
            s++;
        }
    }
    printf("%d",s);
}