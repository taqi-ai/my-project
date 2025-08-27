#include <stdio.h>
int main() {
    int n, d;
    printf("Enter number and divisor: ");
    scanf("%d %d", &n, &d);
    if (d == 0)
        printf("Division by zero not allowed\n");
    else if (n % d == 0)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is not divisible by %d\n", n, d);
    return 0;
}
