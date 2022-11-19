#include <stdio.h>
struct Makanan
{
    char nama[100];
    double berat[100];
    char tanggal_kadarluasa[100];
    char tempat_produksi[100];
    char harga[100];
};

// void display(struct Mahasiswa mhs)
// {
//     printf("Nama : %s\n", mhs.nama);
//     printf("Nilai: %.2lf\n", mhs.nilai);
// }

int main()
{
    struct Makanan ringan[5], berat[5];
    for (int i = 0; i < 5; i++)
    {
    printf("Input Nama : ");
    scanf("%[^\n]", ringan[i].nama);
    getchar();
    printf("Input Berat : ");
    scanf("%lf\n", ringan[i].berat);
    getchar();
    printf("Input Tanggal Kadarluasa : ");
    scanf("%[^\n]", ringan[i].tanggal_kadarluasa);
    getchar();
    printf("Input Tempat Produksi : ");
    scanf("%[^\n]", ringan[i].tempat_produksi);
    getchar();
    printf("Input Harga : ");
    scanf("%[^\n]", ringan[i].harga);
    getchar();
    }
   
    
    
    for (int i = 0; i < 5; i++)
    {
    printf("Nama Makanan : %s\n", ringan[0].nama);
    printf("Berat: %.2lf\n", ringan[0].berat);
    printf("Nama Tanggal Kadarluasa : %s\n", ringan[0].nama);
    printf("Nama Tempat Produksi : %s\n", ringan[0].nama);
    printf("Harga : %s\n", ringan[0].nama);
    }
    
    
    // display(kampus1[0]);

    return 0;
}