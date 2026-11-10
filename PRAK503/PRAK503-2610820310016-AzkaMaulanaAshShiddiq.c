#include <stdio.h>

int besar(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int kecil(int a, int b){
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main(){
    int batas = 0;
    int maks = -100000;
    int minim = 100000;
    int bilangan;
    
    scanf("%d", &bilangan);
    while(batas < bilangan){
        int nilai;
        scanf("%d", &nilai);
        maks = besar(maks, nilai);
        minim = kecil(minim, nilai);
        batas++;
    }
    printf("%d %d", maks, minim);
    
    return 0;
}