#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
	printf("K.Venkateswari (192210620)\n");
    int n;
    printf("enter the rows\n");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}