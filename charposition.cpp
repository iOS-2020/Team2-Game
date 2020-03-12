#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],c;int i,len=0;
    printf("Enter the string:\n");
    scanf("%s",str);
    
    len=strlen(str);
    printf("Enter the char to find:\n");
    scanf(" %c",&c);
    for(i=0;i<len;i++)
        {
            if(str[i]==c)
                {
                    printf("Character found at pos : %d",i);
                    
                }
        }
}
