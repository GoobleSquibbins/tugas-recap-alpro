#include <stdio.h>

int main()
{
    int length, total = 0;
    printf("Masukan Panjang Array : \n");
    scanf("%d", &length);
    if (length > 0)
    {
        int arr[length];
        for (int i = 0; i < length; i++)
        {
            // int temp = 0;
            printf("Elemen ke : %d\n", i + 1);
            scanf("%d", &arr[i]);
        }

        printf("Nilai dalam array : \n");
        for (int i = 0; i < length; i++)
        {
            printf("%d ", arr[i]);
        }
        
        for (int i = 0; i < length; i++)
        {
            total = total + arr[i];
        }

        printf("\nTotal : %d", total);
        
    }

    return 0;
}