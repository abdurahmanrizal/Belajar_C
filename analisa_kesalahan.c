#include <stdio.h>
#include <stdlib.h>

int main(){
    /* kamus */
    int Celcius,CeltoFah,CeltoKel,CeltoRea;
    printf("Masukkan Jumlah Celcius: ");
    // kekurangan pointer "&" dan pergantian %c ke %d karena pada variabel Celcius untuk inputan scanf dan inisialisasi Celcius adalah integer 
    scanf("%d",&Celcius);
    // kurang tanda "*/" untuk perintah komen pada bahasa c
    /* Program*/
    // kesalahan logika pada rumus Celcius ke Fahrenheit
    CeltoFah= (9*Celcius/5) + 32;
    CeltoKel= Celcius+273;
    // kurang tanda ";" untuk perintah menutup logika yang dibuat bahasa c
    // kesalahan logika pada rumus Celcius ke Reamur 
    CeltoRea= (4*Celcius)/5;
    // kurang variabel Celcius, untuk mencetak variabel Celcius
    printf("Dalam Skala Celcius menunjukkan %d \n",Celcius);
    printf("Bila dikonversi menjadi Fahrenheit menjadi: %d\n",CeltoFah);
    // pergantian variabel CeltoKel ke CeltoRea 
    printf("Bila dikonversi menjadi Reamur menjadi : %d\n",CeltoRea);
    // pergantian variabel CeltoRes ke variabel CeltoRea dan pergantian %f ke %d karena variabel CeltoRea adalah integer
    // pergantian variabel CeltoRea ke CeltoKel
    printf("Bila dikonversi menjadi Kelvin menjadi\t: %d\n",CeltoKel);
    return 0;
}