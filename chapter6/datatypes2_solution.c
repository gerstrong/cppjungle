#include <stdio.h>

int main()
{
    int x;   // Ganze Zahlen (32-bit)
    float y; // Fließpunkt-Kommazahl (32-bit)
    double dy; // Fließpunkt-Kommazahl (64-bit)
    char c; // 8-bit -> Zeichen

    x = 2;
    y = x;
    dy = y;

    c = x;

    printf("Datatypes:\n");

    printf("x = %d\n", x);

    printf("y = %f\n", y);
    printf("dy = %lf\n", dy);

    c = 66;

    printf("c = %c\n", c);


    return 0;
}
