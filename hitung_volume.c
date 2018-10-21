/*
    Nama        : Abdurahman
    NIM         : A11.2015.09266
    Tugas       : PDP 3
    Universitas Dian Nuswantoro Semarang

*/
#include <stdio.h>
#include <math.h>
#define phi 3.14
int main(){
    // inisialisasi variabel tabung
    int diameter_tabung,tinggi_tabung,volume_tabung;
    // inisialisasi variabel bola
    int diameter_bola, tinggi_bola, volume_bola;
    // inisialisasi volume tambah dan volume tumpah
    int volume_tambah, volume_tumpah;
    // cetak inputan
    printf("\t\t\t ============= VOLUME TUMPAH =============\n\n");
    printf("Masukkan nilai diameter tabung      :");scanf("%d",&diameter_tabung);
    printf("\n");
    printf("Masukkan nilai tinggi tabung        :");scanf("%d",&tinggi_tabung);
    printf("\n");
    printf("Masukkan nilai diameter bola        :");scanf("%d",&diameter_bola);
    printf("\n");
    printf("Masukkan nilai tinggi bola          :");scanf("%d",&tinggi_bola);
    printf("\n");
    volume_tabung = phi * pow((diameter_tabung/2),2) * tinggi_tabung;
    volume_bola = (4 * phi * pow((diameter_bola/2),3))/3;
    volume_tambah = volume_bola + volume_tabung;
    volume_tumpah = volume_tambah - volume_tabung;
    printf("Hasil dari volume tabung adalah %d",volume_tabung);
    printf("\n");
    printf("Hasil dari volume bola adalah %d", volume_bola);
    printf("\n");
    printf("Hasil pertambahan volume tabung = %d + volume bola = %d adalah %d",volume_tabung,volume_bola,volume_tambah);
    printf("\n");
    printf("Hasil volume tumpah yang dihasilkan adalah %d",volume_tumpah);
    return 0;
}