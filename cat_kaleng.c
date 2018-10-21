/* 
    Nama : Abdurahman
    NIM  : A11.2015.09266
    Tugas : PDP 3
    Universitas Dian Nuswantoro
*/

#include <stdio.h>
#include <time.h>
int main(){
    // inisialisasi tanggal dan waktu pembelian
    struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval); /*Untuk mendapatkan waktu komputer berbasis local komputer */
    // inisialisasi kaleng cat yang akan dibeli konsumen
    int kaleng,total_harga;
    float luas_rumah;
    char nama_pembeli[100];

    // cetak inputan data konsumen yang akan beli cat kaleng
    printf("\t\t\t ============= DATA PEMBELIAN CAT KALENG =============\n\n");
    printf("\t\t\t Nama Pembeli :"); gets(nama_pembeli);
    // printf("\n");
    printf("\t\t\t Luas Rumah   :"); scanf("%f",&luas_rumah);
    kaleng= luas_rumah * 10;
    total_harga = kaleng *25000;
    // printf("Day of Month = %d", Sys_T->tm_mday);
    // printf("\nMonth        = %d", Sys_T->tm_mon+1); /* Ditambah 1 karena Januari dimulai dari 0 */
    // printf("\nYear         = %d", 1900+Sys_T->tm_year); /* Ditambah 1900, karena tahun dimulai dari 1900 */
 
    // printf("\n\nHour         = %d", Sys_T->tm_hour);
    // printf("\nMinutes      = %d", Sys_T->tm_min);
    // printf("\nSeconds      = %d", Sys_T->tm_sec);
    printf("\t\t\t =====================================================\n\n");
    printf("\t\t\t ============= NOTA PEMBELIAN ===================\n\n");
    printf("\t\t\t Nama Pembeli        : %s", nama_pembeli);
    printf("\n");
    printf("\t\t\t Tanggal Pembelian   : %s", asctime(Sys_T));
    // printf("\n");
    printf("\t\t\t Jumlah Kaleng       : %d Buah",kaleng);
    printf("\n");
    printf("\t\t\t Total Pembayaran    : Rp.%d",total_harga);
    printf("\n");
    printf("\t\t\t =================================================");
    // printf("\n\nDay of Week  = %d", Sys_T->tm_wday); /* 0-6 melambangkan Minggu-Sabtu */
    // printf("\nDay of Year  = %d", Sys_T->tm_yday);
 
    // printf ( "\n\nThe current date/time is: %s", asctime (Sys_T));
    /* asctime berfungsi untuk mengubah struct tm menjadi string c dengan format Www Mmm dd hh:mm:ss yyyy */

    return 0;
}