#include <stdio.h>
#include <stdlib.h>
#define N 120
#define NCHAR 12

unsigned int* arr;
char* sentence[] = { "H","e", "l", "l", "o", " ", "w", "o", "r", "l", "d", "!" };

void main() {

    arr = malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
       *(arr + i) = i;
    }
    *(arr + 1) = 0;
    for (int s = 2; s < N; s++)
    {
        if (*(arr + s) != 0)
        {
            for (int j = s * 2; j < N; j += s)
            {
                *(arr + j) = 0;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (*(arr + i) != 0)
        {
            printf("%u, ", *(arr + i));
        }
    }
        
    free(arr);

    char* charArr = malloc(sizeof(char) * NCHAR);
    if (charArr)
    {
        for (int i = 0; i < NCHAR; i++)
        {
            *(charArr + i) + (char)*(sentence + i);
        }
    }

    for (int i = 0; i < NCHAR; i++)
    {
        if (charArr)
        {
            printf("%c", *(charArr + i));
        }
    }

    free(charArr);
}

