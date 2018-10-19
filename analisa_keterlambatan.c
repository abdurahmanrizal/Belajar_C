/* 
    Nama    : Abdurahman
    NIM     : A11.2015.09266
    Kampus  : Universitas Dian Nuswantoro
    Tugas   : PDP 2
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    // inisialisasi variabel jam_masuk, kehadiran_mahasiswa, keterlambatan
    float jam_masuk = 9;
    float menit_masuk = 40;
    float DettoJam = 3600;
    float DettoMen= 60;
    float jam_kehadiran_mahasiswa,menit_kehadiran_mahasiswa,keterlambatan;
    // inputan kehadiran mahasiswa
    printf("Masukkan jam kehadiran mahasiswa :");scanf("%f",&jam_kehadiran_mahasiswa);
    printf("Masukkan menit kehadiran mahasiswa :");scanf("%f",&menit_kehadiran_mahasiswa);

    // konversi jam masuk ke detik
    jam_masuk = jam_masuk*DettoJam;
    // konversi menit masuk ke detik
    menit_masuk = menit_masuk*DettoMen;
    // konversi jam kehadiran mahasiswa ke detik
    jam_kehadiran_mahasiswa = jam_kehadiran_mahasiswa*DettoJam;
    // konversi jam kehadiran mahasiswa ke detik
    menit_kehadiran_mahasiswa = menit_kehadiran_mahasiswa*DettoMen;

    // logika rumus keterlambatan mahasiswa
    if((jam_masuk+menit_masuk)==(jam_kehadiran_mahasiswa+menit_kehadiran_mahasiswa)){
        keterlambatan = 0;
        printf("Mahasiswa Hadir Tepat Waktu dengan keterlambatan = %.f s", keterlambatan);
    }else if((jam_kehadiran_mahasiswa+menit_kehadiran_mahasiswa)<(jam_masuk+menit_masuk)){
        printf("Mahasiswa Hadir Lebih Awal");
    }else{
        keterlambatan = (jam_kehadiran_mahasiswa+menit_kehadiran_mahasiswa) - (jam_masuk+menit_masuk);
        printf("Mahasiswa Terlambat dengan keterlambatan = %.f s",keterlambatan);
    }
    return 0;
}