#include <stdio.h>
#include <stdlib.h>
int main(){
    // inisialisasi waktu,vo,vt,dan a
    float vo,vt,t,a;
    // inputan untuk vo,vt,t, dan a
    printf("Masukkan kecepatan awal mobil :");scanf("%f",&vo);
    printf("\n");
    printf("Masukkan waktu yang dibutuhkan :");scanf("%f",&t);
    printf("\n");
    printf("Masukkan kecepatan yang dihasilkan :");scanf("%f",&vt);
    printf("\n");
    // logika rumus untuk pencarian percepatan mobil;
    a= (vt-vo)/t;
    // cetak vo mobil
    printf("Kecepatan awal mobil = %.2f m/s\n",vo);
    // cetak vt mobil
    printf("Kecepatan mobil = %.2f m/s\n",vt);
    // cetak waktu
    printf("Waktu yang diperlukan = %.2f s\n",t);
    // cetak hasil percepatan
    printf("Percepatan yang dihasilkan = %.2f m/s^2",a);
    return 0;
}