#include <stdio.h>
#define SIZE 5

int main() {
    int i;
    int num[SIZE];
    int min;

    for(i=0;i<SIZE;i++) {
        printf("숫자를 입력하세요 : ");
        scanf("%d", &num[i]);
    }

    min = num[0];

    for(i=1;i<SIZE;i++) {
        if(min > num[i])
            min = num[i];
    }

    printf("[ 최솟값 = %d ]\n", min);
    return 0;
}