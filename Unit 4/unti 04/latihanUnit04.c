#include <stdio.h>

int keliling(int sisi){
    return sisi * 4;
}

int luas(int sisi){
    return sisi * sisi;
}

int volume(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    int sisi;
    printf("Masukan Panjang Sisi : \n");
    scanf("%d", &sisi);

    printf("Keliling Persegi : %d\n", keliling(sisi));
    printf("Luas Persegi : %d\n", luas(sisi));
    printf("Volume Kubus : %d\n", volume(sisi));

    return 0;
}