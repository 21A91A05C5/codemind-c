#include<stdio.h>
int main()
{
    int n,arr[100],i,k;
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
            printf("True");
            return 0;
        }
    }
    printf("False");
}