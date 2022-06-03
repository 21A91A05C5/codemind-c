#include<stdio.h>
int main()
{
    int n,c=0,k=0,j,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                c++;
            }
        }
        k=k+c%2;
    }
    printf("%d",k);
}