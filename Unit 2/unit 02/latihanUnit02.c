#include <stdio.h>

int main(){
    int banyak_transaksi;
    int total = 0;
    printf("Masukan Banyak Transaksi Hari Ini : \n");
    scanf("%d", &banyak_transaksi);

    if (banyak_transaksi <= 0)
    {
        printf("Tidak Ada Transaksi Hari Ini.");
    }else
    {
        //int arr_transaksi[banyak_transaksi];
        for (int i = 0; i < banyak_transaksi; i++)
        {
            int temp = 0;
            printf("Masukan Nominal Transaksi Ke %d:\n", i + 1);
            scanf("%d", &temp);
            total = total + temp;
        }

        printf("Total Transaksi Hari Ini Sebesar : Rp %d", total);
    }

    return 0;
}