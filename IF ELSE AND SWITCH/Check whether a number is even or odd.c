#include<stdio.h>
int main(){
  int num;
  printf("enter the number");
  scanf("%d",&num);
  if(num%2==0){
    printf("%dits even\n",num);
  }
  else{
   printf("%dits odd\n",num);
  }
  return 0;  
  }
