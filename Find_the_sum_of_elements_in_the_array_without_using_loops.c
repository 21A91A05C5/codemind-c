#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr,n,i,sum=0;
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}