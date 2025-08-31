// Program to input student details and print them formatted
#include <stdio.h>
int main() {
char name[20]; int age; float perc;
scanf("%s%d%f", name,&age,&perc);
printf("Name:%s Age:%d Percentage:%.2f", name,age,perc);
return 0;
}