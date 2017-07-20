#include<stdio.h>
void main()
{
int first=0,second=1,third,n,i;
printf("enter the number");
scanf("%d",&n);
printf("\n%d %d\t",first,second);
for(i=0;i<n;++i)
{
third=first+second;
printf("%d\t",third);
first=second;
second=third;
}
}
