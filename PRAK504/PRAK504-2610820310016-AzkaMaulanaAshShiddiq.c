#include <stdio.h>

int balik(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    return rev;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    a = balik(a);
    b = balik(b);
    
    int c = a + b;
    
    printf("%d", balik(c));
    
    return 0;
}