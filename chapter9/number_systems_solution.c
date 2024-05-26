#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *greetText = "Hello World";

    printf("%s\n", greetText);

    // Zu 1.
    printf("\n");
    printf("as Hex-String:\n");

    for(int c=0 ; c<strlen(greetText) ;c++)
    {
        printf("%x", greetText[c]);
    }

    printf("\n");
    printf("\n");

    // Zu 2.
    printf("Read text from file:\n");

    FILE *fp = fopen("test.txt","r");

    int c;
    while (1)
    {
        fread(&c, 1, 1, fp);
        printf("%c", c);

        if(feof(fp))
            break;
    }

    printf("\n");
    printf("as Hex-String:\n");


    // Zurückspulen
    fseek(fp, 0, SEEK_SET);
    while(!feof(fp))
    {
        fread(&c, 1, 1, fp);
        printf("%x", c);

        if(feof(fp))
            break;
    }

    printf("\n");


    fclose(fp);

    return 0;
}
