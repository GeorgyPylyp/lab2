#include <stdio.h>//підключення бібліотек
#include <math.h> 
int main() {
  int y; // оголошення функції;
  int a, b, c; // оголошення локальних змінних
  printf("\n величина a=");//виведення даних
  scanf("%d",&a); //введення даних
  printf("\n величина b=");
  scanf("%d",&b);
  printf("\n величина c=");
  scanf("%d",&c);
  y=(5*a-b+pow(c,2))/(2+c)+1;
  printf("a \t b \t c \t y \n");
  printf("%d\t%d\t%d\t%d", a, b, c, y );
  return 0;
}
