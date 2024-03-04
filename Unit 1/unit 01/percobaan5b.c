#include <stdio.h>

char fullname[30];

int main(){
    printf("Masukan nama lengkap kamu: \n");
    fgets(fullname, sizeof(fullname), stdin);
    printf("Halo %s", fullname);
    return 0;
}

/*
Perbedaan :
pada percobaan ini kita menggunakan fgets(),
output dari input "Agus Sucipto" adalah "Agus Sucipto".
fgets() berhenti jika pada input ada karakter newline ('\n')
atau jika input sudah melebihi batas panjang char yang sudah ditentukan,
yang mana pada program ini adalah 30.
*/