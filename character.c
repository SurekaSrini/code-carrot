#include<stdio.h>
void main()
{
char ch;
scanf("%c",&ch);
if((ch>='a'&& ch<='z') || (ch>='A'&& ch<='Z'))
printf("%d It is an alphabet",ch);
else
printf("%d It is not an alphabet",ch);
}

