#include<stdio.h>
int main(){
  int month;
  printf("enter the number(1to 7):");
  scanf("%d",&month);
  switch ((month))
  {
  case 1:
  printf("january\n");
  break;
  case2:
  printf("feburary\n");
  break;
  case3:
  printf("march\n");
  break;
  case4:
  printf("april\n");
  break;
  case5:
  printf("may\n");
  break;
  case6:
  printf("june\n");
  break;
  case7:
  printf("july\n");
  break;
  case8:
  printf("august\n");
  break;
  case9:
  printf("september\n");
  break;
  case10:
  printf("october\n");
  break;
  case11:
  printf("november\n");
  break;
  case12:
  printf("december\n");
  break;
  default:
  printf("invalide number please enter the number between(1to7)");
  }
  return 0;
}