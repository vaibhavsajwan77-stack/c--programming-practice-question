#include<stdio.h>
int main(){
  int num;
  printf("enter the number");
  scanf("%d",&num);
  if(num%5==0 && num%11==0)
    printf("%dthe number is divisible",num);
  
  else
    printf("%dthe number is not divisible",num);
  
  return 0;
}