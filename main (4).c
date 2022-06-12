/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
 char s[100]; 
 int i,j,k,count=0,n;
printf("Enter the string : ");
 gets(s);
for(i=0;i<strlen(s);i++)
 {
 s[i]=tolower(s[i]);
 }
 for(j=0;s[j];j++);
n=j; 
 printf(" frequency count character in string:\n");
 for(i=0;i<n;i++) 
 {
 count=1;
 if(s[i])
 {
 for(j=i+1;j<n;j++) 
 { 
 
 if(s[i]==s[j])
 {
 count++;
 s[j]='\0';
 }
 } 
 printf(" '%c' = %d \n",s[i],count);
 }
 
 } 
return 0;
}

