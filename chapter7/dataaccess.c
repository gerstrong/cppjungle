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

    for(int c=0 ; c<numPeople ; c++)
    {
        fprintf(stdout, "Who to greet?\n");

        // Read the name and stores it in buf
        scanf("%s", &buf);
        fprintf(stderr, "Hello %s!\n", buf);

        fp = fopen("test.txt", "w");

        if(fp == NULL)
            return -1;

        fprintf(fp, "%s\n", buf);
        fclose(fp);
    }

    return 0;
}
