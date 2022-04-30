#include<stdio.h>
int main()
{
    int n,i,j,arr[100],k,se=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            se++;
        }
    }
    printf("%d",se);
}