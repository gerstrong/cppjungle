#include <cstdio>

void readTwoValues(const int* arr,
                   size_t size,
                   int* firstValue,
                   int* secondValue)
{
    // Zu 1.
    if(firstValue == nullptr)
    {
        fprintf(stderr, "Fehler: Erster Parameter ist ein Null-Zeiger.\n");
        return;
    }

    if(secondValue == nullptr)
    {
        fprintf(stderr, "Fehler: Zweiter Parameter ist ein Null-Zeiger.\n");
        return;
    }

    if (size >= 2) {
        // Nutze Zeiger um die Werte zurückzugeben
        *firstValue = arr[0];
        *secondValue = arr[1];
    } else {
        fprintf(stderr, "Fehler: Array ist zu klein.\n");
    }
}

// Zu 2.
void readTwoRef(const int* arr,
                   size_t size,
                   int &firstValue,
                   int &secondValue)
{
    // Zu 2.
    if (size >= 2) {
        // Nutze Zeiger um die Werte zurückzugeben
        firstValue = arr[0];
        secondValue = arr[1];
    } else {
        fprintf(stderr, "Fehler: Array ist zu klein.\n");
    }
}


int main()
{
    int myArray[] = {10, 20, 30, 40, 50};
    int first, second;

    // Hilfsfunktion die zwei Werte einliest
    readTwoValues(myArray,
                  sizeof(myArray) / sizeof(myArray[0]),
                  &first, &second);

    // Werte anzeigen
    printf("First Value: %d\n", first);
    printf("Second Value: %d\n", second);


    // Hilfsfunktion die zwei Werte einliest (über Referenzen)
    readTwoRef(myArray,
               sizeof(myArray) / sizeof(myArray[0]),
               first, second);


    // Werte anzeigen
    printf("First Value: %d\n", first);
    printf("Second Value: %d\n", second);

    return 0;
}
