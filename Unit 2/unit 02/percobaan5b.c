#include <stdio.h>

int main() {
    int i = 2, j = 1;

    while (i <= 3) {
        printf("Bilangan utama: %d\n", i);
        
        while (j <= 2) {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
            j++;
        }

        i++;
        j = 1;
    }

    return 0;
}

/*
cara kerja :
int i = 2, j = 1; => variabel di inisiasikan

    while (i <= 3) { => selama 'i' bernilai sama atau kurang dari 3 lakukan program di dalam loop                       
        printf("Bilangan utama: %d\n", i); => meng-outputkan "Bilangan utama: n"
        
        while (j <= 2) { => selama 'j' bernilai sama atau kurang dari 2 lakukan program di dalam loop       
            printf(" Bilangan pengali: %d\n", j); => meng-outputkan "Bilangan pengali: n"
            printf("  Hasil perkalian: %d\n\n", j * i); => meng-outputkan "Hasil perkalian: n"
            j++; => mengincrement value variabel 'j'
        }

        i++; mengincrement value variabel 'i'
        j = 1; => me-reset value variable 'j' ke 1 
    }
*/