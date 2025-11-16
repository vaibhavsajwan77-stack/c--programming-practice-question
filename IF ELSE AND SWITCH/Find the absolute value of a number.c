#include<stdio.h>
int main(){
  int num , abas;
  printf("enter the number");
  scanf("%d",&num);
  if(num<0)
  abas=-num;
  else
  abas=num;
  printf("absolute value is%d",abas);
  return 0;
}