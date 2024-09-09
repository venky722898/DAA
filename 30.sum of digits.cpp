#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
	 printf("K.Venkateswari (192210620)\n");
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("Sum of digits: %d\n", sumOfDigits(n));
    return 0;
}
