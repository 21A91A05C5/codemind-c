#include<stdio.h>
int main()
{
    char str[100];
    int i;
    scanf("%[^/n]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='.')
        {
            printf("[.]");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}
