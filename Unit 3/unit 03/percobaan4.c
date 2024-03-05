#include <stdio.h>

#define MAX_PERSONS 3
#define MAX_NAME_LENGTH 20

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"};
    int ages[MAX_PERSONS] = {25, 30, 35};

    printf("Name\t\tAge\n");
    printf("--------------------\n");
    for (int i = 0; i < MAX_PERSONS; i++) {
        printf("%s\t\t%d\n", names[i], ages[i]);
    }

    return 0;
}

/*
Cara kerja:
#include <stdio.h>

#define MAX_PERSONS 3 => mendefinisikan value 'MAX_PERSON' yaitu 3. 
#define MAX_NAME_LENGTH 20 => mendefinisikan value 'MAX_NAME_LENGTH' yaitu 20. 

int main() {
    
    char names[MAX_PERSONS][MAX_NAME_LENGTH] = {"Roma", "Romi", "Romo"}; => membuat array string, char[banyak elemen array][panjang karakter maksimum pada masing-masing elemen array].
    int ages[MAX_PERSONS] = {25, 30, 35}; => membuat array int, ages[banyak jumlah elemen pada array, 'MAX_PERSON' memiliki value 3].

    printf("Name\t\tAge\n"); => print "Name            Age" di terminal;
    printf("--------------------\n"); => print "("--------------------" di terminal.
    for (int i = 0; i < MAX_PERSONS; i++) { => membuat loop yang akan digunakan untuk membaca setiap elemen pada array string names[].
        printf("%s\t\t%d\n", names[i], ages[i]); => print "nama         umur" di terminal, setiap iterasi akan membuat baris baru.
    }

    return 0;
}
*/