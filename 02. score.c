#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int kor[10];
    int eng[10];
    int math[10];
    int total[10];
    float avg[10];

    srand(time(NULL));

    for(int i=0;i<10;i++)
    {
        kor[i]=rand()%101;
        eng[i]=rand()%101;
        math[i]=rand()%101;
    }

    for(int j=0;j<10;j++)
    {
        total[j]=kor[j]+eng[j]+math[j];
        avg[j]=total[j]/3.0;
    }

    int max = total[0];
    for(int k=0;k<10;k++)
    {
        if(max < total[k])
        {
            max = total[k];
        }
    }

    printf("    KOR   ENG   MATH  TOTAL AVG   \n");

    for(int l=0;l<10;l++)
    {
        printf("[%d] %-4d %-4d %-4d %-4d %.2f\n", l, kor[l], eng[l], math[l], total[l], avg[l]);
    }
    return 0;
}