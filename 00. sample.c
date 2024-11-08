#include <stdio.h> // 전처리기, 5장
#define SIZE 3     // 전처리기, 5장
typedef struct
{ // 구조체, 12장
    char name[10];
    double w;
} WEIGHT;
void swap(WEIGHT *, WEIGHT *); // 함수 선언, 8장

int main()
{
    WEIGHT man[SIZE] = {{"한개발", 57.5}, // 배열, 10장
                        {"엄청군", 125.6},
                        {"갈비양", 35.7}};

    int i, j; // 변수, 3장, 기억 부류, 9장
    for (i = 0; i < 2; i++)
    { // 제어문, 7장
        for (j = i + 1; j < 3; j++)
        { // 연산자, 6장
            if (man[i].w < man[j].w)
            {
                swap(&man[i], &man[j]); // call by address, 11장
            }
        }
    }
    printf(" 이름 \t체중\n"); // 입출력 라이브러리 함수, 4장
    for (i = 0; i < 3; i++)
    {
        printf(" %s %5.1f\n", man[i].name, man[i].w);
    }
    return 0;
}
/*--------------swap함수 정의------------------*/
void swap(WEIGHT *mani, WEIGHT *manj)
{   // 포인터, 11장
    // 함수 정의
    WEIGHT temp;
    temp = *mani;
    *mani = *manj;
    *manj = temp;
}