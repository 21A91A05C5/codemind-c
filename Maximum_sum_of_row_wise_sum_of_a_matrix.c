#include<stdio.h>
int main()
{
    int arr[100][100],j,i,max=0,sum=0,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",max);
}