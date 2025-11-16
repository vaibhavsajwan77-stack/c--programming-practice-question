#include<stdio.h>
int main(){
  int day;
  printf("enter the number(1to 7):");
  scanf("%d",&day);
  switch ((day))
  {
  case 1:
  printf("monday\n");
  break;
  case2:
  printf("tuesday\n");
  break;
  case3:
  printf("wednesday\n");
  break;
  case4:
  printf("thrusday\n");
  break;
  case5:
  printf("friday\n");
  break;
  case6:
  printf("saturday\n");
  break;
  case7:
  printf("sunday");
  break;
  default:
  printf("invalide number please enter the number between(1to7)");
  }
  return 0;
}