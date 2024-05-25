#include <stdio.h>

int main()
{
    char buf[256];
    int numPeople = 0;
    FILE *fp = NULL;

    // same as printf
    fprintf(stdout, "How many people to greet?\n");

    // Read x as integer from the buf
    scanf("%d", &numPeople);

    fp = fopen("test.txt", "w"); // Zu 2
    fclose(fp);

    for(int c=0 ; c<numPeople ; c++)
    {
        fprintf(stdout, "Who to greet?\n");

        // Read the name and stores it in buf
        scanf("%s", &buf);
        fprintf(stderr, "Hello %s!\n", buf);

        fp = fopen("test.txt", "a"); // Zu 1

        if(fp == NULL)
            return -1;

        fprintf(fp, "%s\n", buf);
        fclose(fp);
    }

    fp = fopen("test.txt", "r"); // Zu 3

    if(!fp)
    {
        fprintf(stdout, "Error opening file!\n");
        return 1;
    }

    int d = 0;

    while (1)
    {
        d = fgetc(fp);

        if (feof(fp))
            break;

        printf("%c", d);
    }

    fclose(fp);


    return 0;
}
