#include<stdio.h>
int main()
{
    int n,p=0;
    scanf("%d",&n);
    if(n%3==0)
    {
        printf("Pling");
        p=1;
    }
    if(n%5==0)
    {
        printf("Plang");
        p=1;
    }
    if(n%7==0)
    {
        printf("Plong");
        p=1;
    }
    if(p==0)
    printf("%d",n);
    return 0;
}