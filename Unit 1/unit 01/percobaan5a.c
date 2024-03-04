#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    scanf("%s", fullname);
    printf("Halo %s", fullname);
    return 0;
}

/*
Perbedaan :
pada percobaan ini kita menggunakan scanf(),
output dari input "Agus Sucipto" adalah "Agus".
scanf() berhenti jika pada input ada spasi.
*/