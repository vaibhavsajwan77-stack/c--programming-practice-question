#include<stdio.h>
int main(){
  int num1, num2;
  printf("enter two integer numbers:\n");
  scanf("%d %d",&num1,&num2);
 switch (num1==num2)
 {  case 1:
      // If both numbers are equal
      printf("both numbers are equal.\n");
      break;
    case 0:
      switch (num1>num2)
      {
        case 1:
          printf("%d is maximum.\n",num1);
          break;
        case 0:
          printf("%d is maximum.\n",num2);
          break;
      }
      break;
  }
}