#include<stdio.h>
#include<stdlib.h>
void main()
{
char ch;
printf("do you want to stutdown the system(y/n)\n");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
system("c:\\WINDOWS\\system 32\\stutdown /s");
}
