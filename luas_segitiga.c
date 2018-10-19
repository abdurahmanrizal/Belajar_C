/* 
    Nama    : Abdurahman
    NIM     : A11.2015.09266
    Kampus  : Universitas Dian Nuswantoro
    Project : Luas dan keliling segitiga menggunakan bahasa c
    Tugas   : PDP 1
*/

#include <stdio.h>
#include <math.h>

int main(){
    // inisialiasai alas, tinggi, sisi segitiga
    float alas,tinggi,sisi,luas_segitiga,keliling;
    // membuat judul
    printf("\t\t\t ======================= SEGITIGA ===========================\n");
    //membuat inputan alas,tinggi, sisi segitiga
    printf("Masukkan alas segitiga :");
    scanf("%f",&alas);
    printf("\n");
    printf("Masukkan tinggi segitiga:");
    scanf("%f",&tinggi);
    printf("\n");
    // membuat rumus luas segitiga
    luas_segitiga= (alas*tinggi)/2;
    //membuat rumus sisi segitiga dan keliling segitiga
    sisi= sqrt((pow((alas/2),2))+(pow(tinggi,2)));
    keliling = 3*sisi;
    //cetak luas dan keliling segitiga
    printf("Hasil luas segitiga dari alas= %.2f dan tinggi= %.2f adalah %.2f\n",alas,tinggi,luas_segitiga);
    printf("Hasil keliling segitiga dari sisi = %.2f adalah %.2f",sisi,keliling);
    return 0;
}