
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
    printf("%s\n", argv[1]);
    clock_t cl = clock();
    int valorReservar = (atoi(argv[1]) * 1e6);
    int *A_heap = malloc(valorReservar);
    int count = valorReservar / 4;
    if (argc == 2)
    {

        while (1)
        {
            for (int i = 0; i < count; i++)
            {
                *(A_heap + i) = 0;
            }
            printf("lleno vector");
        }
    }
    else
    {

        while ((clock() - cl) / CLOCKS_PER_SEC < atoi(argv[2]))
        {
            for (int i = 0; i < count; i++)
            {
                *(A_heap + i) = 0;
               
            }
            
        }
    }

    return 0;
}