#include<stdio.h>
int main(){
  int number;
  printf("enter the number");
  scanf("%d",&number);
  if (number>0){
   printf("the number is positive");
  }else if (number<0)
  {
    printf("the number is negative");
  }
  else{
    printf("number is zero");
  }
return 0;
   
  }