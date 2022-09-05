#include<stdio.h>
int main()
{
    int n ,m,i,j, s=0,c=0,arr[100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            s+=arr[j];
            if(s==m)
            {
                c++;
            }
            if(s>m)
            {
                break;
            }
        }
        s=0;

    }
    printf("%d",c);
}