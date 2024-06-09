 
#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 3

void dispArray(int array[])
{
    printf("{");
    for(int c=0 ; c<ARRAY_SIZE ; c++)
    {
        printf("%d", array[0]);
        if(c<ARRAY_SIZE-1)
            printf(", ");
    }
    printf("}");
    printf("\n");
}

void sumArrays(int array1[], int array2[])
{
    printf("Content of first is:\n");
    dispArray(array1);
    printf("Content of second is:\n");
    dispArray(array2);

    int sum[ARRAY_SIZE];

    for(int c=0 ; c<ARRAY_SIZE ; c++)
    {
        sum[c] = array1[c]+array2[c];
    }

    printf("Content of sum is:\n");
    dispArray(sum);

}

int main()
{
    int myVec1[ARRAY_SIZE];
    int myVec2[ARRAY_SIZE];

	memset(myVec1, 0, sizeof(myVec1));
	memset(myVec2, 0, sizeof(myVec2));

    sumArrays(myVec1, myVec2);

    printf("Now let's change some values:\n");
    myVec1[0] = 12;
    myVec1[1] = 23;
    myVec1[2] = 34;
    myVec2[0] = 12;
    myVec2[1] = 23;
    myVec2[2] = 34;

    sumArrays(myVec1, myVec2);


    return 0;
}
