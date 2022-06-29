#include<stdio.h>
int main()
{
    int n,arr[100],i,mini=100,a,b,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            if(arr[i]<mini)
            {
                mini=arr[i];
                c++;
            }
        }
    }
    if(c!=0)
    {
        printf("%d",mini);
    }
    else
    {
        printf("-1");
    }
}