#include<stdio.h>
int main()
{
char c[50],i;
scanf("%s",c);
for(i=0;c[i]!='\0';i++) 
{
if(i%2==0) 
{ 
printf("%c",c[i]);
}
}  
printf(" ");
for(i=0;c[i]!='\0';i++) 
{
if(i%2!=0) 
{
printf("%c",c[i]);
}
}
return 0;
}
