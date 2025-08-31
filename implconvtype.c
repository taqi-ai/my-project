// Program to demonstrate implicit type conversion
#include <stdio.h>
int main() {
int a=5; float b=2.5;
float c=a+b; // int promoted to float
printf("%f", c);
return 0;
}