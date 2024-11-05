#include <stdio.h>  // 표준 입출력 함수 라이브러리
#include <stdlib.h> // 메모리 할당, 난수 생성 등 유틸리티 함수 라이브러리

int main(void)
{
    int a;
    int b;

    printf("두 개의 수를 입력하세요: "); // 서식화된 출력
    scanf("%d %d", &a, &b);             // 서식화된 입력

    int c = a + b;
    int d = a - b;
    float e = (float)a / b;             // 명시적 형변환
    int max;

    if (a < b)
    {
        max = b;
    } else
    {
        max = a;
    }

    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);
    printf("%.2f\n", e);                // 서식지정
    printf("큰 수는: %d\n", max);

    return 0;
}
