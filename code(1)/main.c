#include <stdio.h>//підключення бібліотек
#include <math.h> 
int main() {
  int d; // оголошення функції;  залишок від ділення чисел
  int r; // оголошення функції;  різниця чисел
  int s; // оголошення функції;  сума чисел 
  int a, b;  // оголошення локальних змінних
  printf("\n перше число a="); //виведення даних
  scanf("%d",&a); //введення даних
  printf("\n друге число b=");
  scanf("%d",&b);
  d=a%b;
  r=b-a;
  s=a+b;
  printf("a \t b \t d \t r \t s \n");
  printf("%d\t%d\t%d\t%d\t%d", a, b, d, r, s );
  return 0;
}