#include<stdio.h>
int main()
{
    int n,arr[100],s=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            s+=arr[i];
        }
    }
    printf("%d",s);
}