#include <stdio.h>
#include <string.h>

#define VEC_LEN 20

int addEx(float *v1, float *v2, float *v3)
{
    printf("v1 + v2 = v3\n");

    for(int i=0 ; i<VEC_LEN ; i++)
    {
        v3[i] = v1[i] + v2[i];
        printf("%f + %f = %f\n", v1[i], v2[i], v3[i]);
    }


    return 0;
}

int subEx(float *v1, float *v2, float *v3)
{
    printf("v1 + v2 = v3\n");

    for(int i=0 ; i<VEC_LEN ; i++)
    {
        v3[i] = v1[i] - v2[i];
        printf("%f - %f = %f\n", v1[i], v2[i], v3[i]);
    }


    return 0;
}


int main()
{
    float v1[VEC_LEN], v2[VEC_LEN], v3[VEC_LEN];

    memset(v1, 0.0f, sizeof(v1));
    memset(v2, 0.0f, sizeof(v2));
    memset(v3, 0.0f, sizeof(v3));


    for(int i=0 ; i<VEC_LEN ; i++)
    {
        v1[i] = (float)i;
        v2[i] = (float)(i*i);
        printf("v1[%d] = %f\n", i, v1[i]);
        printf("v2[%d] = %f\n", i, v2[i]);
    }


    subEx(v1, v2, v3);
    addEx(v1, v2, v3);

    return 0;
}
