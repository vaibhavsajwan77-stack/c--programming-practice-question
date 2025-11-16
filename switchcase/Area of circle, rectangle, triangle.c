#include <stdio.h>
int main()
{
  int choice;
  float area;
  float radius, base, length, breadth, height;
  const float pi = 3.14;
  printf("enter your choice(1-3):\n");
  printf("1: area of circle\n2: area of square\n3: area of rectangle\n");
  scanf("%d", &choice);
  switch (choice)
  {case 1:
      printf("enter the radius of circle:\n");
      scanf("%f", &radius);
      area = pi * radius * radius;
      printf("area of circle: %.2f\n", area);
      break;
    case 2:
      printf("enter the base of triangle:\n");
      scanf("%f", &base);
      printf("enter the height of triangle:\n");
      scanf("%f", &height);
      area = 0.5 * base * height;
      printf("area of triangle: %.2f\n", area);
      break;
    case 3:
      printf("enter the length and breadth of rectangle:\n");
      scanf("%f %f", &length, &breadth);
      area = length * breadth;
      printf("area of rectangle: %.2f\n", area);
      break;
    default:
      printf("invalid choice! please enter a number between 1 and 3.\n");
  }
}