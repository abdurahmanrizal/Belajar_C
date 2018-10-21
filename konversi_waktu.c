/*
    Nama : Abdurahman
    NIM  : A11.2015.09266
    Universitas Dian Nuswantoro Semarang
*/
#include <stdio.h>
// membuat type data bentukan
typedef struct{
    int jam;
    int menit;
    int detik;
}time;
// membuat fungsi
time konversiwaktu(int detik){
    time durasi;
    int Jam2Detik = 3600;
    int Menit2Detik = 60;
    durasi.jam = detik / Jam2Detik;
    durasi.menit= (detik % Jam2Detik) / Menit2Detik;
    durasi.detik= detik % Menit2Detik;
    
    return durasi;
}
int main(){
    time jamdurasi;
    int detik;
    //inputan waktu dalam detik
    printf("Masukkan waktu dalam detik yang di inginkan :");
    scanf("%d",&detik);
    jamdurasi= konversiwaktu(detik);
    printf("Konversi waktu yang dihasilkan adalah %d jam %d menit %d detik ",jamdurasi.jam,jamdurasi.menit,jamdurasi.detik);
    return 0;
}