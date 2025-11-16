#include<stdio.h>
int main(){
  char ch;
  printf("enter the character",ch);
  scanf("%c",&ch);
  if(ch>="A" && ch<="Z"){
    printf("%cthis is uppercase",ch);
  }
  else if(ch>="a"&& ch<="z"){
    printf("%cthis is lower case",ch);
  }
  else if(ch>="0"&& ch<="9"){
    printf("%cthis is a digit",ch);
  }
  else{ 
    printf("%cits an special symbol",ch);
  }
  return 0;
}