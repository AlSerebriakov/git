#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
  float y;
  int x;
  printf("Please enter intenger number x: "); // ввод в радианах
  scanf("%d", &x);
  y = sin(x); // функция считает синус радианов, а не в градусах
  printf("Sin x = %.3f", y); // вывод результата
  getch();
  return 0;
}
