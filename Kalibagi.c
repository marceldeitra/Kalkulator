#include <stdio.h>

float mul(float a, float b){
    return a*b;
}

float div(float a, float b){
    if(b == 0){
        printf("Syntax Error!\n");
        return 0;
    }
    return a/b;
}

int main(){
    int pilihan;
    float a, b, hasil;

    printf("Kalkulator\n");
    printf("1. Perkalian\n");
    printf("2. Pembagian\n");
    printf("Pilih operasi: ");
    scanf("%d", &pilihan);
    
    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);

    switch(pilihan){
        case 1:
            hasil = mul(a, b);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 2:
            hasil = div(a, b);
            if(b != 0){
                printf("Hasil: %.2f\n", hasil);
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }
    return 0;
}