#include<stdio.h>
int main()
{
    int n,arr[100],c=0,i,temp,d,rev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        rev=0;
        while(temp)
        {
            d=temp%10;
            temp=temp/10;
            rev=rev*10+d;
            
        }
        if(rev==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}