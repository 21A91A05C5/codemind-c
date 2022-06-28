#include<stdio.h>
int main()
{
    int n,arr[100],i,sum1=0,sum2=0,diff;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    diff=sum1-sum2;
    printf("%d",diff);
}