#include <stdio.h>

int i, j;

int main()
{

    for (i = 2; i <= 3; ++i)
    {
        printf("Bilangan utama: %d\n", i);

        for (j = 1; j <= 2; ++j)
        {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
        }
    }

    return 0;
}

/*
Cara kerja :
pada loop
for (i = 2; i <= 3; ++i)
{
    printf("Bilangan utama: %d\n", i);

    for (j = 1; j <= 2; ++j)
    {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
    }
}
loop akan terus terjadi selama variabel 'i' bernilai sama atau kurang dari 3.

pada iterasi pertama :
'i' = 2, 2 bernilai kurang dari 3 sehingga program didalam loop dijalankan, yaitu melakukan
printf("Bilangan utama: %d\n", i);
pada iterasi pertama output dari kode diatas adalah 
"Bilangan utama: 2"
lalu dilanjutkan ke for loop selanjutnya yang terletak di dalam for loop pertama.
for (j = 1; j <= 2; ++j)
    {
            printf(" Bilangan pengali: %d\n", j);
            printf("  Hasil perkalian: %d\n\n", j * i);
    }
disini perintah 
printf(" Bilangan pengali: %d\n", j);
printf("  Hasil perkalian: %d\n\n", j * i);
akan terus dilakukan selama variabel 'j' di
for (j = 1; j <= 2; ++j)
bernilai sama atau kurang dari 2.

    pada iterasi pertama ini 'j' bernilai 1, 1 kurang dari 2 sehingga perintah
    printf(" Bilangan pengali: %d\n", j);
    printf("  Hasil perkalian: %d\n\n", j * i);
    dijalankan.
    output dari perintah diatas adalah :
    "Bilangan pengali: 1"
    "Hasil perkalian: 2"

    dilakukan increment pada nilai 'j' (j++), sehingga 'j' sekarang memiliki nilai 2;

    pada iterasi kedua 'j' bernilai 2, 2 sama dengan 2 sehingga perintah
    printf(" Bilangan pengali: %d\n", j);
    printf("  Hasil perkalian: %d\n\n", j * i);
    dijalankan.
    output dari perintah diatas adalah :
    "Bilangan pengali: 2"
    "Hasil perkalian: 4"

dilakukan increment pada nilai 'i' (i++), sehingga 'i' sekarang memiliki nilai 3

pada iterasi kedua :
'i' = 3, 3 bernilai sama dengan 3 sehingga program didalam loop dijalankan, yaitu melakukan
printf("Bilangan utama: %d\n", i);
pada iterasi pertama output dari kode diatas adalah 
"Bilangan utama: 3"
lalu dilanjutkan ke for loop selanjutnya yang terletak di dalam for loop pertama.

    pada iterasi pertama ini 'j' bernilai 1, 1 kurang dari 2 sehingga perintah
    printf(" Bilangan pengali: %d\n", j);
    printf("  Hasil perkalian: %d\n\n", j * i);
    dijalankan.
    output dari perintah diatas adalah :
    "Bilangan pengali: 1"
    "Hasil perkalian: 3"

    pada iterasi kedua 'j' bernilai 2, 2 sama dengan 2 sehingga perintah
    printf(" Bilangan pengali: %d\n", j);
    printf("  Hasil perkalian: %d\n\n", j * i);
    dijalankan.
    output dari perintah diatas adalah :
    "Bilangan pengali: 2"
    "Hasil perkalian: 6"
*/