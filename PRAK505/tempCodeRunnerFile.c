#include <stdio.h>

void Biodata(int lahir, char nama[], char asal[]) {
    int tahun = 2026;
    int umur = tahun - lahir;
    
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", umur);
    printf("Saya Adalah Angkatan : %d\n", tahun);
    printf("Asal Saya dari : %s", asal);
}

int main() {
    int lahir;
    char A[20], B[15];
    
    scanf(" %d",&lahir);
    scanf(" %[^\n]%*c",&A);
    scanf(" %[^\n]%*c",&B);
    Biodata(lahir, A, B);
    
    return 0;
}