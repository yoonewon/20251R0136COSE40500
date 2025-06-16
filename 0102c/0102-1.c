#include <stdio.h>

int main() {
    int start, end;
    int sum = 0;
    int start_num;

    printf("시작 값 : ");
    scanf("%d", &start);

    printf("끝 값 : ");
    scanf("%d", &end);

    while (start > end) {
        printf("시작 값이 끝 값보다 큼!\n");
        printf("시작 값 : ");
        scanf("%d", &start);
        printf("끝 값 : ");
        scanf("%d", &end);
    }

    start_num = start;

    while ( start <= end) {
        sum += start;
        start++;
    }

    //printf("합 : %d\n", sum);
    printf("%d ~ %d까지의 합 : %d\n", start_num, end, sum);
    return 0;
}



/* 1~3까지의 합
int main() {
    int sum = 0;
    int num = 1;

    while ( num <= 3 ) {
        sum += num;
        num++;
    }

    printf("%d\n", sum);

    return 0;
 }
 */