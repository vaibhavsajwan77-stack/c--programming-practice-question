#include<stdio.h>
int main(){
  char ch;
  printf("enter the alphabte\n");
  scanf("%c",&ch);
  if(ch>='A'&& ch<='Z'){
    ch=ch+('a'-'A');
  }
  switch (ch)
  {
  case'a':
  case'e':
  case'i':
  case'o':
  case'u':
  printf("%c is a vowel \n",ch);
  break;
  default:
   if((ch>='a' && ch<='z')){
    printf("%c is a constant\n",ch);
   }
    else{
      printf("invalide input\n");
   }
  }
  return 0;
  
}