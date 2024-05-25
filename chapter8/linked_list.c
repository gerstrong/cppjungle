#include <stdio.h>

struct node
{
    int item;
    struct node *next;
};

int main()
{
    int memory[200];

    struct node *root = (struct node *)(memory);

    // TODO: Bitte hier Code eintragen,
    // der die Werte der Liste initialisiert.

    // Elemente anzeigen
    struct node *cur;
    for( cur = root ; cur != NULL ; )
    {
        printf("%d\n", cur->item);
        cur = cur->next;
    }

    return 0;
}
