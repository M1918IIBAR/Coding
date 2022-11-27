#include <stdio.h>

int main()
{

    int a;
    int n[a];

    printf("masukan size int: ");
    // scanf("%d", &a);
    getchar();

    for(int i = 0; i < a; i++)
    {
        printf("masukan angka untuk array %d: ", i);
        // scanf("%d", &n[i]);
        getchar();
    }
    

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\n");
    printf("Setelah diurutkan");
    printf("\n");
    // buble sort

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (n[j] > n[j + 1])
            {
                int temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", n[i]);
    }
    return 0;
}