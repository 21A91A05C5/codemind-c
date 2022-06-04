#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        if(c==0)
        {
             printf("%d ",arr[i]);
             c1++;
         }
    }
    
    if(c1==0)
    {
        printf("-1");
    }
}