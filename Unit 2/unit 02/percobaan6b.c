#include <stdio.h>

int main() {
    int i = 2, j;

    do {
        printf("Bilangan utama: %d\n", i);
        j = 1;
        
        do {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        } while (j <= 2);

        i++;
    } while (i <= 3);

    return 0;
}

/*
cara kerja:
    int i = 2, j; => inisialisasi variabel

    do {                                                
        printf("Bilangan utama: %d\n", i); => print "Bilangan utama: n" ke terminal.
        j = 1; => me-reset value 'j' pada setiap perulangan ke 1.
        
        do {
            printf(" Bilangan pengali: %d\n", j); => print "Bilangan pengali: n" dimana n adalah value 'j' ke terminal.
            printf("  Hasil perkalian: %d\n\n", j * i); => print "Hasil perkalian: n" dimana n adalah hasil kali variabel 'j' dan 'i'.
            j++; => increment value 'j'.
        } while (j <= 2); => lakukan perintah di dalam do{} selama kondisi di dalam while() bernilai true

        i++; => increment value 'i'.
    }
     while (i <= 3); => lakukan perintah di dalam do{} selama kondisi di dalam while() bernilai true
*/