#include<stdio.h>
int main()
{
    int n,arr[100],j,c=0,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
         if(c==1)
         {
            if(arr[i]%2!=0)
            {  
                 sum++;
            }
         }
    }
   
    printf("%d",sum);
}