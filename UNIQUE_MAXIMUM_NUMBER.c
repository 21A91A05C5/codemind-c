#include<stdio.h>
int main()
{
    int n,i,j,c=0,c1=0,arr[100],m=0;
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
            if(arr[i]>m)
            {
                m=arr[i];
                c1++;
            }
        }
    }
    if(c1==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",m);
    }
}