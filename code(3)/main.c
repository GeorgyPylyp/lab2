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
  printf("\n значення функції f=%d",f );
  return 0;
}
