#include<stdio.h>
int main()
{
    int n,arr[100][100],sum=0,i,j,m,sum1=0;
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
        
        for(j=0;j<m;j++)
        {
            if((i+1)%2==0)
            {
                sum+=arr[i][j];
            }
            if((i+1)%2)
            {
                sum1+=arr[i][j];
            }
        }
   
    }
    printf("%d %d ",sum1,sum);
    
 }