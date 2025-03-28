#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    srand(time(NULL));
    
    int rand_nombre = rand();

    printf("El nombre aleatori és: %d\n", rand_nombre);
}
