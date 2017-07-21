 #include<stdio.h>
int main(){
  int power,n,i=1;
  long int sum=1;
  printf("\nEnter a number: ");
  scanf("%d",&n);
  printf("\nEnter power: ");
  scanf("%d",&power);
  while(i<=power){
            sum=sum*n;
            i++;
  }
  printf("\n%d to the power %d is: %ld",n,power,sum);
  return 0;
}

