#include <stdio.h>//підключення бібліотек
#include <math.h> 
int main() {
  int x, y, z;  // оголошення локальних змінних
  int f; // оголошення функції
  printf("\n перше число x="); //виведення даних
  scanf("%d",&x); //введення даних
  printf("\n друге число y=");
  scanf("%d",&y);
  printf("\n друге число z=");
  scanf("%d",&z);
  f=(x*x+z*z)/(sqrt(x+y));
  printf("x \t y \t z\t f \n");
  printf("%d\t%d\t%d\t%d\t", x, y, z, f);
  return 0;
}