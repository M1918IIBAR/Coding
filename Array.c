#include <stdio.h>

int main ()
{
int z[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("Masukan value untuk array [%d][%d]: ", i, y);
            scanf("%d", &(z[i][y]));
        }
    }

    printf("%s", "Masukan panjang array X: ");
    int lengthArrayX;
    scanf("%d", &lengthArrayX);
    getchar();
    printf("%s", "Masukan panjang array Y: ");
    int lengthArrayY;
    scanf("%d", &lengthArrayY);
    getchar();

    for (int i = 0; i < lengthArrayX; i++)
    {
        for (int y = 0; y < lengthArrayY; y++)
        {
            printf("%d ", z[i][y]);
        }
        printf("\n");
    }

    return 0;
}