#include<stdio.h>
int main(){
  int num,i , count;
  printf("Enter a number : ");
  scanf("%d",&num);
  while(num!=0){
    count++;
    num=num/10;

  }
  printf("Number of digits : %d",count);
  return 0;
}