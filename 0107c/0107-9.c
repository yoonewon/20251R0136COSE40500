#include <stdio.h>

void pr(float n);

int main() {
    float x, y;

    printf("사칙연산을 할 두 실수 입력\n");
    scanf("%f %f", &x, &y);

    pr(x+y);
    pr(x-y);
    pr(x*y);
    pr(x/y);

    return 0;

}

void pr(float n) {
    printf("------------\n");
    printf("결과 = %.2f\n",n);
    printf("------------\n");
}