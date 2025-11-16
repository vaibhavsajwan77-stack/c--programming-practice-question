#include<stdio.h>
int main(){
  int choice;
  float volume; 
  float side, length, breadth, height, radius;
  const float pi=3.14;
  printf("enter your choice(1-3):\n");
  printf("1: volume of cube\n2: volume of cuboid\n3: volume of sphere\n");
  scanf("%d",&choice);
  switch (choice)
  {
    case 1:
      printf("enter the side of cube:\n");
      scanf("%f",&side);
      volume=side*side*side;
      printf("volume of cube: %.2f\n",volume);
      break;
    case 2:
      printf("enter the length, breadth and height of cuboid:\n");
      scanf("%f %f %f",&length,&breadth,&height);
      volume=length*breadth*height;
      printf("volume of cuboid: %.2f\n",volume);
      break;
    case 3:
      printf("enter the radius of sphere:\n");
      scanf("%f",&radius);
      volume=(4/3)*pi*radius*radius*radius;
      printf("volume of sphere: %.2f\n",volume);
      break;
    default:
      printf("invalid choice! please enter a number between 1 and 3.\n");
  }
}