#include<stdio.h>
int main()
{
    int n,arr[100],i;
    float avg,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    printf("%.2f",avg);
}