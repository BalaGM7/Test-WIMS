#include<stdio.h>
void main(){
  int a,b,total;
  printf("Enter two numbers: \n");
  scanf("%d %d", &a, &b);
  total = a+b;
  printf("Sum of %d and %d is %d", a, b, total);
}
