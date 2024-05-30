#include <stdio.h>

#define SWAP(x, y) \
      int z = x; \
      x = y; \
      y = z;

int main()
{
    int x = 5, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // Nutzen des Swap Macros zum vertauschen der Werte
    SWAP(x, y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
