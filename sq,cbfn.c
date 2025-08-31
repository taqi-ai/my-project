// Program with functions to calculate square and cube
#include <stdio.h>
int square(int n) { return n*n; }
int cube(int n) { return n*n*n; }
int main() {
int x=3;
printf("Square=%d Cube=%d", square(x), cube(x));
return 0;
}