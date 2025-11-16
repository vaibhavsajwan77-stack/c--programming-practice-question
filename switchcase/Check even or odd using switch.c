#include<stdio.h>
int main(){
  int number,result;
  printf("enter an integer number:\n");
  scanf("%d",&number);
  result=number%2;
  switch (result)
  {
    case 0:
      printf("the number is even");
      break;
    case 1:
      printf("the number is odd");
      break;
    default:
      printf("invalid input");
  }
}