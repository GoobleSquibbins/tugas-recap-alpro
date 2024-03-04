#include <stdio.h>

int main(){
    int jarak1, jarak2, waktu1, waktu2, kecepatan1, kecepatan2;
    printf("Masukan jarak(m) dan waktu(s) : \n");
    scanf("%d %d", &jarak1, &waktu1);
    printf("Masukan kecepatan(m/s) dan waktu(s) : \n");
    scanf("%d %d", &kecepatan1, &waktu2);
    printf("Masukan jarak(m) dan kecepatan(m/s) : \n");
    scanf("%d %d", &jarak2, &kecepatan2);

    float fkecepatan1 = kecepatan1;
    float fkecepatan2 = kecepatan2;
    float fjarak1 = jarak1;
    float fjarak2 = jarak2;
    float fwaktu1 = waktu1;
    float fwaktu2 = waktu2;

    printf("Kecepatan = %.2f \n", fjarak1 / fwaktu1);
    printf("Jarak = %.2fm\n", fkecepatan1 * fwaktu2);
    printf("Waktu = %.2fs\n", fjarak2 / fkecepatan2);
    return 0;
}