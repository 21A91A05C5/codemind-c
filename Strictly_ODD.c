#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            if(i%2!=1)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    
}    