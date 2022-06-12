/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    char str[30]={'E','m','b','e','d','d','e','d',' ','S','y','s','t','e','m','s'};
    int l=strlen(str);
    int i,j,k,temp;
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=i+1;str[j]!=0;j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!=0;k++)
                {
                    str[k]=str[k+2];
                }
            }
        }
    }
    printf("%s",str);
    return 0;
}

