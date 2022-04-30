#include<stdio.h>
int main()
{
    int i,k;
    char str[100];
    scanf("%[^
]s",&str[i]);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        {
            k++;
        }
    }
    printf("%d",k+1);
}