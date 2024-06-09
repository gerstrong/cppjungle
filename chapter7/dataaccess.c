#include <stdio.h>

int main()
{
    char buf[256];
    int numPeople = 0;
    FILE *fp = NULL;

    // Gleichwertig zu printf
    fprintf(stdout, "Wievielen Leuten möchten Sie grüßen?\n");

    // Lese x als integer aus der Tastatureingabe
    scanf("%d", &numPeople);

    for(int c=0 ; c<numPeople ; c++)
    {
        fprintf(stdout, "Wen möchten Sie grüßen?\n");

        // Lese den name ein und speichere diesen in buf
        scanf("%s", &buf);
        fprintf(stderr, "Hallo %s!\n", buf);

        fp = fopen("test.txt", "w");

        if(fp == NULL)
            return -1;

        fprintf(fp, "%s\n", buf);
        fclose(fp);
    }

    return 0;
}
