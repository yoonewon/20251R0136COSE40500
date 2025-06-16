#include <stdio.h>
#define SIZE 3

int ary_prn1(int ap1[]);   // void ary_prn1(int []);
int ary_prn2(int *ap2);    // void ary_prn2(int *);

int main(void) {
    int ary[SIZE] = {1, 2, 3};
    ary_prn1(ary);
    ary_prn2(ary);
    return 0;
}

int ary_prn1(int ap1[]) {  // 배열로 받음
    int i;
    for (i = 0; i < SIZE; i++) 
        printf("%5d", ap1[i]);
    printf("\n");
    return 0;
}

int ary_prn2(int *ap2) {   // 포인터로 받음
    int i;
    for (i = 0; i < SIZE; i++) 
        printf("%5d", *(ap2 + i));
    printf("\n");
    return 0;
}
