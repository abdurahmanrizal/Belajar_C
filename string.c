#include <stdio.h>
#include <string.h>
int main(){
    char nama[100];
    char first_name[] ="Abdurahman";
    char last_name[] ="Rizal";
    // mengganti huruf 'R' dengan huruf 'J'
    last_name[0]='J';
    // mencetak kata string dengan menggunakan fungsi sprintf
    sprintf(nama,"%s %s",first_name,last_name);
    // kondisi apakah nama yang dihasilkan pada cetak string TRUE OR FALSE
    if(strncmp(nama,"Abdurahman Jizal",100)==0){
        printf("Done !!\n");
        // return 0
        nama[0] ='\0';
        // menggabungkan nama tanpa spasi
        strncat(nama,first_name,20);
        strncat(nama,last_name,100);
        printf("%s\n",nama);
    }else{
        printf("Something Went Wrong");
    }
    return 0;
}