/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float x,y;
    float total,avg;

    printf("Enter marks of your first subject: ");
    scanf("%2f", &x);
    printf("Enter marks of your second subject: ");
    scanf("%2f", &y);

    total=x+y;
    avg=total/2;

    printf("The average is %2f", avg);
  return 0;
}

