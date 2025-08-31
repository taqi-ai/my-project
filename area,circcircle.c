// Program to input radius and print area and circumference of circle
#include <stdio.h>
#define PI 3.14159
int main() {
float r; scanf("%f", &r);
printf("Area=%.2f Circum=%.2f", PI*r*r, 2*PI*r);
return 0;
}