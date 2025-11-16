#include<stdio.h>
int main(){
char ch;
printf("enter the character\n");
scanf("%c",&ch);
switch (ch)     
{
case '0': case'1': case '2': case '3': case'4': case '5': case'6': case '7': case '8': case'9':
  printf("Digit \n");
    break;
     case '!': case '@': case '#': case '$': case '%':
        case '^': case '&': case '*': case '(': case ')':
        case '-': case '+': case '=': case '{': case '}':
        case '[': case ']': case ':': case ';': case '"':
        case '\'': case '<': case '>': case ',': case '.':
        case '/': case '?': case '\\': case '|':
            printf("Special Symbol\n");
            break;
    default:
    if((ch>='A' && ch<='Z' || ch>='a' && ch<='z'))
        printf("alphabat\n");
       else
       printf(" speacial symbol"); 
    break;
}
return 0;
}