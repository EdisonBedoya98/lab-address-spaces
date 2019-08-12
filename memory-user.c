
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include  <sys/types.h>
#include  <unistd.h>

int main(int argc, char *argv[])
{
    printf("%s\n", argv[1]);

    pid_t pid = getpid();
    printf(" This is the PID: %d", pid);
    
    clock_t cl = clock();
    int valorReservar = (atoi(argv[1]) * 1e12);
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