#include<stdio.h>
int main()
{
    int n,i,arr[100],k;
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