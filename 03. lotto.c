#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int data[10];

    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
        data[i] = rand() % 46 + 1;
        for (int j = 0; j < i; j++)
        {
            if (data[i] == data[j])
            {
                i--;
                break;
            }
        }
    }
    printf("이번 주 로또 번호는 : ");

    for (int i = 0; i < 6; i++)
    {
        printf("%-3d ", data[i]);
    }

    return 0;
}