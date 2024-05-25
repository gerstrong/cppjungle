#include <stdio.h>
#include <string.h>

struct node
{
    int item;
    struct node *next;
};


struct node* head = NULL;

void insert(struct node* cur, int val)
{
    while(cur->next)
    {
        cur = cur->next;
    }

    cur->item = val;

    // Nächsten freien Knoten vorab anlegen (Tail).
    int nodeSize = sizeof(struct node);
    cur->next = cur + 1;
}

int main()
{
    int memory[200];

    memset(memory, 0, 200*sizeof(int));

    struct node *root = (struct node *)(memory);

    // Liste mit den Zahlen füllen
    for (int i = 0; i < 40; i++)
    {
        int val = 0;

        scanf("%d", &val);

        if(val < 0)
        {
            break;
        }

        insert(root, val);
    }

    // Elemente anzeigen
    struct node *cur;
    for( cur = root ; cur != NULL ; )
    {
        printf("%d\n", cur->item);
        cur = cur->next;
    }

    return 0;
}
