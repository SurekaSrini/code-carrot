#include <stdio.h>
void main()
{
int n,c=0;
printf("\n Please Enter any number\n");
scanf("%d",&n);
while(n>0)
{
n=n/10;
c=c+1;  
}
printf("\n Number of Digits in a Given Number = %d",c);
}
