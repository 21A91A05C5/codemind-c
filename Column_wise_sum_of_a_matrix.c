#include<stdio.h>
int main()
{
    int n,arr[100][100],sum=0,i,j,m,max=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }

 }