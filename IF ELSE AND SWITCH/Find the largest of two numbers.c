int main(){
  int num1,num2;
  printf("enter the number");
  scanf("%d%d",&num1,&num2);
  if(num1>num2){
    printf("the largest number is%d",num1);
  }
  else if(num1<num2){
    printf("the largest number is%d",num2);
  }
  else{
    printf("both are equal");
  }
  return 0;
}
