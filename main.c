/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int main()
{
char str[30]={'E','m','b','e','d','d','e','d',' ',' ','S','y','s','t','e','m','s'};
    int i,j,k;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[j]==str[i])
            {
                for(k=j;str[k]!='\0';k++)
                {
                   str[k]=str[k+2]; 
                }
            }
        }
    }
    printf("%s",str);
    

    return 0;
}   

