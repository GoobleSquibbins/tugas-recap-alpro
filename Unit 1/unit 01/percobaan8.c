#include <stdio.h>

float phi = 3.141592653589793238462643383279502884197;

int main(){
    printf("%f\n", phi);
    printf("%.1f\n", phi);
    printf("%.2f\n", phi);
    printf("%.3f\n", phi);
    printf("%.4f\n", phi);
    printf("%.5f", phi);
    return 0;
}

/*
Maksud dari '.' pada printf("%.nf\n", phi); :
titik ('.') pada kode diatas digunakan untuk menentukan berapa angka dibelakang koma yang akan ditampilkan pada output.
jadi "%.1f" akan menampilkan 1 angka dibelakang koma dari 3.141592653589793238462643383279502884197, yaitu 3,1,
"%.2f" akan menampilkan 2 angka dibelakang koma dari 3.141592653589793238462643383279502884197, yaitu 3,14
"%.3f" akan menampilkan 3 angka dibelakang koma dari 3.141592653589793238462643383279502884197, yaitu 3,141, dst, dst.
*/