#include <stdio.h>
#include <math.h>

int hitung(int x, int y){
    if(x > y){
    return x - y;
    }else return y - x;
}

int mutlak(int angka){
    if (angka < 0) {
        return -angka;
    }
    return angka;
}

int main() {
    int a, b, c, d;
    int hasil;
    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    hasil = hitung(a, b) + hitung(c, d);
    printf("%d", mutlak(hasil));
    return 0;
}